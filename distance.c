#include <stdio.h>
#include<math.h>
struct point
{
    int x;
    int y;
};
void main()

{
    struct point p1, p2;
    float s;
    printf("Enter point 1 and 2\n");
    scanf("%d %d", &p1.x,&p1.x);
    scanf("%d %d", &p2.x,&p2.y);
    float a=(p2.x-p1.x)*(p2.x-p1.x);
    a+=(p2.y-p1.y)*(p2.y-p1.y); 
    s =sqrt(a);
    printf("Distance:%f", s);
}


