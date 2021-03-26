#include<stdio.h>

int main()
{ 
     void fibo(int n)
     { 
        int i,y,x,sum; 
        x =0;
        y= 1; 

        for (i=0;i<=n;i++)
        {   
            printf("%d, ", x);
            sum = y +x; 
            y = x;
            x = sum; 
        }
     } 
int n; 

scanf("%d",&n );
fibo(n);
}