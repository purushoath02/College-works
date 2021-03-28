#include <stdio.h>
#include <math.h>

void pr(int x);
void div(int n, int count);

int main()
{
	int n, f;
	int count = 0;
	scanf("%d", &n);
	if(n<100 || n> 9999)
	{
		printf("Invalid Input");
	}
	else
	{
		f = n;
		while(f != 0)
		{
			count ++;
			f = f/10;
		}
		printf("%d\n", count);
		div(n, count);
	}
	return 0;
}

void div(int n, int count)
{
	int x, j;
	j = pow(10, count-1);
	//printf("n is %d\n", n);
	for(int i = 0; i < count; i++)
	{
		x = n/j;
		//printf("x is %d\n", x);
		pr(x);
		n = n - x*j;
		j = j/10;
		//printf("j is %d\n", j);
	}
}

void pr(int x)
{
	switch(x)
        {
        case 0:
             printf("Zero "); 
            break;
        
        case 1: 
             printf("One "); 
            break; 

        case 2: 
            printf("Two "); 
            break; 

        case 3: 
            printf("Three "); 
            break; 

        case 4:
            printf("Four ");
            break; 

        case 5: 
            printf("Five "); 
            break; 
        
        case 6:
            printf("Six "); 
            break;
        
        case 7: 
            printf("Seven ");
            break;
        
        case 8: 
            printf("Eight "); 
            break; 
        
        case 9: 
            printf("Nine "); 
            break; 

        }
}
