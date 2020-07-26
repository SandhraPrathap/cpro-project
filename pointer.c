/*
12) Write a C-program to:
Do the following using pointers
i)add two numbers
ii)swap two numbers using a user defined function
*/
#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void main()
{
    int *a, *b;
    int c, d;
    a = &c;
    b = &d;
    printf("Enter the 2 numbers\n");
    scanf("%d%d", a, b);
    ;
    printf("sum:%d\n", *a + *b);

    printf("\nBefore swap : a = %d  b = %d", *a, *b);
    swap(a, b);
    printf("\nAfter swap: a = %d b = %d\n", *a, *b);
}
