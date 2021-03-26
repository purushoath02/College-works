#include<stdio.h>
 int main()
 {
     float c, f;
     printf("Enter temprature in Celsius \n");
     scanf("%d", &c);
     f = ((c*9)/5) + 32;
     printf("\n");
     printf("Temprature in Fahrenheit is %f", f);
     return 0;

 }