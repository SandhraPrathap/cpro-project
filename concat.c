/*4.Write a C program to
    Read 2 strings(each one ending with a $ symbol),store them in arrays and concatenate them 
    without using library functions.*/
#include <stdio.h>
void main()
{
    char a[50], b[20];
    int i;
    printf("Enter first string ending with $\n");
    scanf("%[^\n]%*c", a);
    printf("Enter second string ending with $\n");
    scanf("%[^\n]%*c", b);
    for(i=0;a[i]!='$';i++);
    int n=i;
    for(i=0;b[i]!='$';i++)
    a[i+n]=b[i];
    a[i+n]='$';
    for(i=0;a[i]!='$';i++)
    printf("%c",a[i]);
    
    
}







