#include <stdio.h>
#include <stdlib.h>
void bsort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i-1; j++)

        {
            if (a[j + 1] < a[j])
            {
                a[j + 1] += a[j];
                a[j] = a[j + 1] - a[j];
                a[j + 1] = a[j + 1] - a[j]; //swap without using third variable
            }
        }
    }
}

void main()
{
    int n;
    int *a;
    printf("Enter the no. of elements\n");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bsort(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

}

