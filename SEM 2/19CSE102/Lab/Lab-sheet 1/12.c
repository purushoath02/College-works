#include<stdio.h>
#include<math.h>

int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter cordinates of Triangle");
    printf("\n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("\n");
    scanf("%d", &x2);
    scanf("%d", &y2);
    printf("\n");
    scanf("%d", &x3);
    scanf("%d", &y3);
    printf("\n");
    int l1,l2,l3; 
    l1 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    l2 = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    l3 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("Length of sides : %d  %d  %d",l1,l2 ,l3);
    float s, area;
    s = 0.5*(l1+l2+l3);

    area = sqrt(s*(s-l1)*(s-l2)*(s-l3));
    printf("\n");
    printf("Area of triangle: %f", area);

    return 0;


}