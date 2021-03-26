#include<stdio.h>
int main()
{ 
    int n,i,sum=0; 
    scanf("%d",&n ); 

    int fact(int n)
    { 
        int fact,i; 
        fact = 1 ; 
        for(i=1; i<=n;i++)
        { 
            
            fact = fact*i ; 

        }
        return fact ;
    }
     
 for(i=1; i<=n; i++)
 {
     sum = sum + (i*i)/fact(i);
 }
printf("%d", sum);
    

}