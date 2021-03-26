#include<stdio.h>

int main ()
{
    int a;
    scanf ("%d", &a);
    int x = (a&1);
   /* printf("%d", x);*/
    if (x == 1)
    {
        printf("Odd");
    
    }
    else
    {
        printf("Even");
    }
}
