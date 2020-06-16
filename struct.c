#include <stdio.h>
struct employee
{
    char name[20];
    int Emid;
    int Salary;
} s[20];
void main()
{
    int n;
    printf("Enter n\n");
    scanf("%d", &n);
   
    for (int i = 0; i < n; i++)
    {
        printf("Enter details\n");
        scanf("%s",s[i].name);
        scanf("%d",&s[i].Emid);
        scanf("%d",&s[i].Salary);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d. Name:%s Employee id:%d Salary:%d\n", i + 1, s[i].name, s[i].Emid, s[i].Salary);
    }
}
