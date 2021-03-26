#include<stdio.h>


int main()
{  
  void non_fibo(int n)
  {
        int i,y,x,sum,nsum,j; 
        x =0;
        y= 1; 

        for (i=0;i<=n;i++)
        {   
           // printf("%d, ", x);
            sum = y +x; 
            y = x;
            x = sum;
            nsum = x+y; 
            for(j=sum+1;j<nsum;j++)
            { 
                if (j<=n)
                { 
                    printf("%d, ",j);
                }
            }
        }
  

}
int n; 
scanf("%d", &n); 
non_fibo(n);
}