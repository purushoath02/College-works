#include<stdio.h>

int main()
{ 
    int r, n,x ;
    scanf("%d", &n);

     
    while(n!=0)
    {
        r =  n%10; 
        x =x*10 + r;
        n =n/10;
    }
    printf("%d", x);         
return 0; 
}
