#include<stdio.h>
int main()
{ 
    int n,sum,m,x;
    n = 1; 
    sum =0;
    m =0; 
    
    for (x= 0;; x++)
    {
          
        if (sum > 150)
        {
        break;
        }
        else
        {
            printf("%d ",n);
            sum = m+n;
            m = n;
            n = sum;
        }
    }
    return 0;


}