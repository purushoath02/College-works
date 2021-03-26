#include<Stdio.h>
int main ()
{
     int a, x =0;  
     scanf("%d", &a); 
     int i ; 
     for (i=1;i<=(a/2);i++)
        {
            
            if(a%i ==0)
            {
              x++;           
            } 
        
        } 

if ( x!=1)
{ 
    printf("%d is not a  prime number", a); 
}
else
{
    printf("%d is a prime", a); 
}
return 0; 

}