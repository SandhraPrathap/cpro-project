/*1. Write a C program to:
     Read n integers store them in an array and search for an element in the array usin an 
     algorithm for Linear Search*/
#include <stdio.h>
void main()
{
    int n, a[20], m, j = 0;
    printf("Enter the no. of integers\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the no. to be searched\n");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            printf("Found %d in position %d\n", m, i + 1);
            j = 0;
            break;
        }
        else
            j = 1;
    }
    if (j == 1)
        printf("not found\n");
}
