#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("file.txt", "w");
    fprintf(f, "%s", "This is a file\n");
    freopen("file.txt", "r", f);
    char s[20];
    fscanf(f, "%[^\n]%*c", s);
    printf("%s\n", s);
    freopen("file.txt", "a", f);
    fprintf(f, "%s", "Added data\n");

    freopen("file.txt", "r", f);
    fscanf(f, "%[^\n]%*c", s);
    printf("%s", s);
    fscanf(f, "%[^\n]%*c", s);
    printf("%s", s);
    freopen("file.txt", "r", f);
    int NoW = 0, NoC = 0, NoL = 0;
    while (!feof(f))
    {
        char ch = fgetc(f);
        NoC++;
        switch (ch)
        {
        case '\n':
            NoL++;
            break;
        case ' ':
            NoW++;
            break;
        }
    }
    FILE *outfile = fopen("results.txt", "w");
    fprintf(outfile, "No of characters : %d\n No of words: %d,No of lines : %d", NoC, NoW + 1, NoL);
    fclose(outfile);
    fclose(f);
}