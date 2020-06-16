#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    printf("%d %d", *a, *b);
}

void main()
{
    int *a, *b;
    int c, d;
    a = &c;
    b = &d;
    printf("Enter the no.\n");
    scanf("%d%d", a, b);
    *a = *a + *b;
    printf("sum:%d", *a);
    swap(a, b);
    int n, arr[20];
    printf("Enter n\n");
    scanf("%d", &n);
    int sum = 0;
    printf("\nEnter the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
        sum += *(arr + i);
    }
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    printf("\n%d", sum);
}

