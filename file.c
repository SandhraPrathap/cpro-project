#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("file.txt", "w"); // opening in write mode
    fprintf(f, "%s", "This is a file");
    freopen("file.txt", "r", f); // reopening in read mode
    char s[50];
    fscanf(f, "%[^\n]%*c", s);
    printf("%s\n", s);
    freopen("file.txt", "a", f); // reopening in append mode
    fprintf(f, "%s", "Added new data\n");
    freopen("file.txt", "r", f);
 
    while (!feof(f))
    {
        fscanf(f, "%[^\n]%*c", s);
        printf("%s\n", s);
    }
    fclose(f);
}
