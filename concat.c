#include <stdio.h>
#include<string.h>
void main()
{
    char a[50], b[20];
    int i;
    printf("Enter first string\n");
    scanf("%[^\n]%*c", a);
    printf("Enter second string\n");
    scanf("%[^\n]%*c", b);
    if (strcmp(a, b) == 0)
        printf("same\n");
    for (i = 0; a[i] != '$'; i++)
        ;
    int n = i;
    for (i = 0; b[i] != '$'; i++)
    {
        a[i + n] = b[i];
    }
    a[i+n]='$';
    for(i=0;a[i]!='$';i++)
    printf("%c",a[i]);
    
}

/*





*/