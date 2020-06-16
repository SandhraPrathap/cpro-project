#include <stdio.h>
void print(int n, int m, int c[20][20])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}

void pro(int a[20][20], int b[20][20], int n, int m, int t)
{
    int c[20][20];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    print(n, t, c);
}
void sum(int a[20][20], int b[20][20], int n, int m)
{
    int c[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    print(n, m, c);
}
void trans(int a[20][20], int n, int m)
{
    int c[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[j][i] = a[i][j];
        }
    }
    print(m, n, c);
}
void main()
{
    int r, n, m, i, j, a[20][20], b[20][20], s, t;
    printf("Enter 1-sum, 2-trans,3-product\n");
    scanf("%d", &r);
    switch (r)

    {
    case 1:
        printf("Enter the no. of rows and columns of first matrix\n");
        scanf("%d%d", &n, &m);
        printf("Enter first matrix\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                scanf("%d", &a[i][j]);
        }
        printf("Enter no. of rows and column of second matrix\n");
        scanf("%d%d", &s, &t);
        printf("Enter second matrix\n");

        for (i = 0; i < s; i++)
        {
            for (j = 0; j < t; j++)
                scanf("%d", &b[i][j]);
        }
        if (n == s && m == t)
        {
            printf("sum:\n");
            sum(a, b, n, m);
        }
        else
            printf("invalid \n");
        break;

    case 2:
        printf("Enter the no. of rows and columns of  matrix\n");
        scanf("%d%d", &n, &m);
        printf("Enter first matrix\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                scanf("%d", &a[i][j]);
        }
        trans(a, n, m);
        break;

    case 3:
        printf("Enter the no. of rows and columns of first matrix\n");
        scanf("%d%d", &n, &m);
        printf("Enter first matrix\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                scanf("%d", &a[i][j]);
        }
        printf("Enter no. of rows and column of second matrix\n");
        scanf("%d%d", &s, &t);
        printf("Enter second matrix\n");

        for (i = 0; i < s; i++)
        {
            for (j = 0; j < t; j++)
                scanf("%d", &b[i][j]);
        }
        if (s == m)
        {
            printf("Product:\n");
            pro(a, b, n, m, t);
        }
        else
            printf("invalid \n");
        break;
    }
}