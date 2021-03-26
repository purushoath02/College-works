#include<stdio.h>
int main () 
{ 
    int n, sum,i;
    scanf("%d", &n); 
    sum = 0; 
    for (i =0; i<=n; i++)
    {
        sum = i + sum; 

    }
printf("%d \n", sum); 
i = 0; 
sum = 0;
while(i<=n)
{
    sum = i + sum;
    i++; 
}
printf("%d \n", sum); 
i = 0; 
sum = 0;
do
{
    sum = i + sum;
    i++ ;
}
while(i<=n);
printf("%d \n", sum);
} 