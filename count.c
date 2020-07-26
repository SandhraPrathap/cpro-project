/*5.Write a C program to:
    Read a string(ending with a $ symbol),store it in an array and count the number of vowels,
    consonants and spaces in it*/
#include <stdio.h>
void main()
{
    char a[50];
    int j = 0, k = 0, l = 0;
    printf("Enter the string\n");
    scanf("%[^\n]%*c", a);
    for (int i = 0; a[i] != '$'; i++)
    {
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
            j++;
        else if (a[i] == ' ')
            k++;
        else
        {
            l++;
        }
    }
    printf("Vowels: %d\n", j);
    printf("Consonants:%d\n", l);
    printf("space:%d\n", k);
}
