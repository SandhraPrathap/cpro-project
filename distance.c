/*6.Write a C program to :
    Read 2 input each representing the distances between 2 points in the euclidean space,
    store these in structure variables and add the two distance values */
#include <stdio.h>
struct Point
{
    int dist;
} p1, p2, p3;
int main()
{
    printf("Enter the first distance\n");
    scanf("%d", &p1.dist);
    printf("Enter the second distance\n");
    scanf("%d", &p2.dist);
    p3.dist = p1.dist + p2.dist;
    
    printf("total distance\n");
    printf("%d\n", p3.dist);
}
