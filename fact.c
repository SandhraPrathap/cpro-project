#include <stdio.h>

long dino(long n)
{
    if (n == 1)
        return 1;
    return n * dino(n - 1);
}
long fact(long n)
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
    printf("recursive %ld\n", dino(n));
    printf("non-recursive %ld\n", fact(n));
}
