#include<stdio.h>
int main()
{ 
    int nsum(int n)
    { 
        int i,sum;
        sum = 0 ;
        for(i=0; i<=n;i++)
        {
            sum =sum +i; 

        }

        return sum ; 


    }
int n; 
scanf("%d", &n); 
printf("\n%d", nsum(n));
return 0 ; 

}
