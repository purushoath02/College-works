#include<stdio.h>
#include<math.h>


    
char* num_word(int n)

    { 
        //printf("Num word called \n");
        switch(n)
        {
        case 0:
            return "Zero"; 
            break;
        
        case 1: 
            return "One"; 
            break; 

        case 2: 
            return "Two"; 
            break; 

        case 3: 
            return "Three"; 
            break; 

        case 4:
            return "Four";
            break; 

        case 5: 
            return "Five"; 
            break; 
        
        case 6:
            return "Six"; 
            break;
        
        case 7: 
            return "Seven";
            break;
        
        case 8: 
            return "Eight"; 
            break; 
        
        case 9: 
            return "Nine"; 
            break; 
        default:
            return "Invalid";
        }
     } 

void digit_word(int n)
{
    
       
       if (n<=9999 && n>=100)
       {
        int o,t,h;
        o = n%10;
        n = floor(n/10);
        t = n%10; 
        n = floor(n/10);
        h = n%10;
        n = floor(n/10); 
       if(n>0)
        {
            int thou;
            thou = n%10;
            printf("%s ", num_word(thou));
          }
        printf("%s ", num_word(h));
        printf("%s ", num_word(t));
        printf("%s \n", num_word(o));
        
       }
        
    }
    
int main()
{ 
   

 int n; 

scanf("%d", &n);
//printf("%s", num_word(n));
digit_word(n); 
//printf("%s", num_word(1));
return 0 ;


}
