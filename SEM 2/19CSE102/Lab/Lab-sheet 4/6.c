#include<stdio.h>
int main()
{ 
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
    int n; 
    scanf("%d", &n); 
    printf("%d", fact(n));
    return 0;
}