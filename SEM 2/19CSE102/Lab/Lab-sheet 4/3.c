#include<stdio.h>
int main () 
{
 int l(int n)
 { 
    int r; 
    int l = n % 10; 
    while (n> 0)
    {
        r = n% 10;
        if (l<r)
            {
                l = r;
            }
        n = n / 10;      
    }
    return l ; 

 }
 int x;
 scanf("%d", &x);
 printf("%d", l(x));
return 0;
}