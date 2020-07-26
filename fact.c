/*
09) Write a C-program to:
Find the factorial of a given Natural Number n using:
i) recursive function
ii) non recursive function
*/

#include <stdio.h>

long recfact(long n)
{
    if (n == 1)
        return 1;
    return n * recfact(n - 1);
}
long nonrecfact(long n)
{
    long s = 1;
    for (int i = n; i > 0; i--)
    {
        s *= i;
    }
    return s;
}
void main()
{
    long n;
    printf("Enter n\n");
    scanf("%ld", &n);
    printf("recursive %ld\n", recfact(n));
    printf("non-recursive %ld\n", nonrecfact(n));
}
