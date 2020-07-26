#include <stdio.h>
#define C_SIZE 50
union address {
    char name[C_SIZE];
    char housename[C_SIZE];
    char cityname[C_SIZE];
    char state[C_SIZE];
    char pincode[C_SIZE];

} u[5]; 

void main()
{printf("Enter the details\n");

// Each field is read into a seperate variable because one union variable can only store one member at a time.
    scanf("%s", u[0].name);
    scanf("%s", u[1].housename);
    scanf("%s", u[2].cityname);
    scanf("%s", u[3].state);
    scanf("%s", u[4].pincode);

    printf("%s\n", u[0].name);
    printf("%s\n", u[1].housename);
    printf("%s\n", u[2].cityname);
    printf("%s\n", u[3].state);
    printf("%s\n", u[4].pincode);
}