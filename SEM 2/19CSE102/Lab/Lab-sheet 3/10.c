#include<stdio.h>

int main()
{ 
int  i , n; 
scanf("%d", &n); 
long long fact = 1; 
for (i = 1; i <= n; i++) 
{
    if (n<=0){
        
        break;
    }
            
            fact *= i;

    
} 
if (n>=0)
{
printf("\n%lld", fact);
}
return 0;
}

