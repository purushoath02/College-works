#include<stdio.h>

int main() 
 { 
    void Nfibo(int n)
     { 
        int i,y,x,sum,m; 
        x =0;
        y= 1; 

        for (i=0;i<=n;i++)
        {   
            sum = y + x; 
            y = x;
            x = sum; 

            for (m=y; m<sum; m++)
            { 
                printf("%d %d %d\n", sum,y,m );
                if (m<=y && m==x)
                {
                    continue;
                }
                else{ 
                    printf("%d,\n", m);
                }
            }