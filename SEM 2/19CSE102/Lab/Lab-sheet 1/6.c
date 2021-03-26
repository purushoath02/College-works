#include<stdio.h>
int main()
{
    float p,n,r,s;
    printf("Enter , Principle amount ");
    scanf("%f",&p);
    printf("\n");
    printf("Enter the number years ");
    scanf("%f",&n);
    printf("\n");
    printf("Enter the Rate ");
    scanf("%f",&r);
    s = (p*n*r)/100;
    printf("\n");
    printf("The Simple intrest is %f ", s);
    return 0;
}
    