#include <stdio.h>
void main()
{
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

    printf("Sum of elements of the array : %d", sum);
}