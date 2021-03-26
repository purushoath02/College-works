#include<stdio.h>

int main()
{
    float b,h,a;
    printf("Enter altitude of triangle ");
    scanf("%f", &h);
    printf("\n");
    printf("Enter base  ");
    scanf("%f", &b);
    a = (0.5*b)*h;
    printf("\n");
    printf("The area of the triangle is %f", a);
    return 0;


}