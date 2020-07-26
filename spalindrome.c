/*3.Write a C program to:
    Check if a string input by a user is a palindrome or not*/
#include <stdio.h>
void main()
{
    char s[50];
    int n, j = 0;
    printf("Enter the string\n");
    scanf("%[^\n]%*c", s);
    for (n = 0; s[n] != '\0'; n++);
        

    for (int i = 0; i < n/2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            printf("Not Palindrome\n");
            j=0;
            break;
            
        }
        else
    
        
        {
            j = 1;
        }
    }
    if (j == 1)
        printf("Palindrome\n");
}