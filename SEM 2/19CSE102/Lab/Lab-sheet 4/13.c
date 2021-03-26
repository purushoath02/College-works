#include<stdio.h>
int main()
{ 
    void prime_fact(int n)
    { 
        int i,j; 
        for(i=1;i<=n;i++)
        { 
            //printf("%d:factor check  \n",i);
            if (n%i==0)
            { 
                int prime_check = 1 ; 
                for(j=1;j<i;j++)
                //printf(" %d:Prime check \n", j);
                {
                    
                   if (i%j==0 && j!=1){ 
                        prime_check =0; 
                    }
                    
                }
               // printf("%d -----------\n", prime_check);
                if (prime_check==1)
                        { 
                            printf(" %d,  \n",j );
                        }
                else{
                    continue;
                }
                    
            }
        }
    } 

int n; 
scanf("%d", &n); 
prime_fact(n);
}