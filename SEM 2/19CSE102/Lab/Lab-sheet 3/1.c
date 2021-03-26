#include<stdio.h>
int main () 
{ 
    int a; 
    printf("even numbers for loop \n");
    for (a=0; a<=50; a++){
         
        if(a%2==0 ){ 
            printf("%d \n", a); 
        }
        
    } 
    printf("Odd numbers for loop \n");
    for (a=0; a<=50; a++){
        if(a%2==1 ){ 
            printf("%d \n", a); 
        }
        
    } 

a = 0 ; 
printf("Even number in do while loop\n");
do
{

    if (a%2 == 0);
    {
        printf("%d \n", a);
    }
    a++;
}while(a<=50);

a = 0 ; 
printf("odd number in do while loop\n");
do
{

    if (a%2 == 1);
    {
        printf("%d \n", a);
    }
    a++;
}while(a<=50);


printf("Even number in while loop ");
a =0 ; 
while(a<=50){
    if(a%2==0){
        printf("%d \n", a);
    }
    a++;

}

printf("odd number in while loop \n");
a =0 ; 
while(a<=50){
    if(a%2==1){
        printf("%d \n", a);
    }
    a++;

}

}


