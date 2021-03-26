#include<stdio.h>

int main()
{
    int a = 0 ; 
    int m,n,x =0 ;
    while(a<5){ 
        scanf("%d", &m); 
         
        scanf("%d", &n);
        if (n>m)
        {
            if (n>x)
            {
            x = n; 
            }
        }
        else
        {
            if (m>=x)
            {
            x = m; 
            }
        }
        a++;
    
          }
printf("\n %d", x);

}