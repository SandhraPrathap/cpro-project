#include <stdio.h>
void main()
{
    int n, arr[20];
    printf("Enter n\n");
    scanf("%d", &n);

    printf("\nEnter the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
}