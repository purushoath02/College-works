#include<stdio.h>

int main()
{

    void swap(int *a, int *b)
    {
        int c;  
        c= *a;
        *a = *b; 
        *b = c; 

    }

    int sl (int n, int m , int l)
    { 
        if (n >= m)
        { 
            if (n<=l)
            { 
                return n ; 
            }
            else if (n>l)
            {   
                if (l>=m)
                 {
                     return l; 

                
                 } 
                else if (l<m)
                {
                    return m; 
                }
                
            }

            
        }
        else if( n < m  )
        { 
            
            if(m<=l)
            { 
                return m ;
            }
            else if (m>l)
            { 
                if(l>=n)
                { 
                    return l; 
                }
                else if (n> l)
                {
                    return n ; 
            
                }
                
            }
           
            
            
        }
    }

int x, y , z; 
scanf("%d %d %d", &x, &y, &z);

swap(&x,&y); 
printf("%d %d", x,y);

printf("\n%d", sl(x,y,z)); 


return 0 ;

}