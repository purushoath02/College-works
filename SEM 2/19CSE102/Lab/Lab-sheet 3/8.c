#include <stdio.h>

int main() 
{ 
    int p,n,z,num;
    p=n=z=0;
    for(;;)
    {
        scanf("%d", &num); 
        if (num ==999)
        {
            break;
        }
        else if (num < 0)
        {
            n++; 

        } 
        else if (num>0)
        {
            p++; 
        }
        else{
            z++;
        }
    }
printf("\n Number of Positive int: %d number of Negative int: %d number of zero: %d", p,n,z);
return 0;

}