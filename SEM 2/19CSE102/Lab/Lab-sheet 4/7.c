#include<stdio.h>
int main()
{
    
    printf("For addition enter 1");
    printf("\nFor subraction enter 2");
    printf("\nFor multiplication enter 3");
    printf("\nFor div enter 4\n");
int a, b; 
    void input(){ 
        
        scanf("%d %d", &a, &b); 

    }
    int n; 

    scanf("%d", &n);

    switch (n)
    { 
        case 1:
        
            input();
            printf("\n%d", a+ b); 
            break; 
        case 2:
            input();
            printf("\n%d", a- b); 
            break; 
        case 3: 
            input();
            printf("\n%d", a*b); 
            break; 
        case 4:
            input();
            printf("\n%d", a/b);
            break; 
        default: 
            printf("\nInvalid"); 


        
    } 
    
}