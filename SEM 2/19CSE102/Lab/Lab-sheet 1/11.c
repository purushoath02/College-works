#include<stdio.h>
#include<math.h>

int main()
{
    float f;
    f = ((2.9678*pow(10, -27)) + (0.876*pow(10.0, -38)))/((7.025*pow(10, 16)) - (9.75*pow(10, 12)));
    printf("%e", f );
    return 0;

}