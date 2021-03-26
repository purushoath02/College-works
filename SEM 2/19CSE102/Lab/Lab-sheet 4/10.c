#include<stdio.h>
int main()
{
   float  cint(float p,float n,float r)
   { 
    float s; 
    s = (p*n*r)/100;
    return s; 
   } 
float p,n,r;
printf("Enter , Principle amount ");
scanf("%f",&p);
printf("\n");
printf("Enter the number years ");
scanf("%f",&n);
printf("\n");
printf("Enter the Rate ");
scanf("%f",&r);

printf("%f", cint(p,n,r));




    return 0;
}
    