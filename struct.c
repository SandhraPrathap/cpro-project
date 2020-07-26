#include<stdio.h>
struct employee
{char Name[20];
int Employee_id;
int Salary;
}s[20];
void main()
{int n;
printf("Enter n\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{printf("Enter details\n");
scanf("%s",s[i].Name);
scanf("%d",&s[i].Employee_id);
scanf("%d",&s[i].Salary);
}
for(int i=0;i<n;i++)
{printf("%d. Name:%s Employee id:%d Salary:%d\n",i+1,s[i].Name,s[i].Employee_id,s[i].Salary);
}

}
