#include<stdio.h>

int main()
{ 
    int sum(int a, int b)
    {
        return a+b; 

    }

int x, y ; 
scanf("%d %d", &x,&y); 
printf("\n%d", sum(x,y)); 
return 0; 

}