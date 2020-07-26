/*10) Write a C-program to:
Read a string (word), store it in an array and obtain its reverse by using a user defined
function.*/
#include <stdio.h>
#include <string.h>
void rev(char a[50], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        char t = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = t;
    }
    printf("%s", a);
}
void main()
{
    char a[50];
    printf("Enter the string\n");
    scanf("%s", a);
    int n = strlen(a);
    rev(a, n);
}
