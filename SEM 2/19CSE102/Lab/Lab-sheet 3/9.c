#include<stdio.h>

int main () 
{ 
    int a,n;
    scanf("%d", &n);
    printf("\n");
    for (a=0; a<=n; a++){
         
        if(a%2==1){ 
            printf("%d ", a); 
        }
        
    } 
}