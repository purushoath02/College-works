#include <stdio.h>
int main ()
{
    int a = 5 , b =10;
    a = a+b;
    b = a-b;
    a = a-b; 
    printf("a = %d; b =%d", a, b);
    
    int c = 10 ,  d = 15;
    c = c^d;
    d = d^c;
    c = c^d;
    
    printf("\nc = %d; d = %d", c, d); 
    return 0;

}