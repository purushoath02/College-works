#include<stdio.h>
int main()
{ 
    int large(int a, int b, int c)
    { 
        if(a>=b)
        { 
            if (a>=c)
            { 
                return a; 
            }
            else if (a<c)
        
            {
                if (c>=b)
                {
                    return c; 
                } 
                
                
            }
            
        }
        else if (b>a)

        {
            if (b>c)
            { 
                return b; 
            }
            else if (b<=c)
            {
                if (c<=a)
                { 
                    return c;
                }
            }
            
        }
        
    }
int a , b , c; 
scanf ("%d %d %d", &a,&b,&c);
printf("\n%d", large(a,b,c));
return 0 ; 

}