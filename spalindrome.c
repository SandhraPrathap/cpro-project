#include <stdio.h>
void main()
{
    char s[50];
    int n, j = 0;
    printf("Enter the string\n");
    scanf("%[^\n]%*c", s);
    for (n = 0; s[n] != '\0'; n++)
        ;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            printf("Not Palindrome\n");
            break;
            j = 0;
        }
        else
    
        
        {
            j = 1;
        }
    }
    if (j == 1)
        printf("Palindrome\n");
}