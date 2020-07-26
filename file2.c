#include <stdio.h>
void main()
{
    FILE *f;
    char s[100];
    f = fopen("file.txt", "r");
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