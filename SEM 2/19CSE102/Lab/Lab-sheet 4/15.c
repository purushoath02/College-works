#include <stdio.h>

void order_sl(int n,int m); 
void choco_sales(); 
void total_amt();
void menu_sl(); 
int wc_n,dc_n,rc_n, bc_n,n,m; 
float price , discount; 

int main() 
{ 
    void order_sl(int n, int m)
    { 
        
            switch (n)
        { 
            case 1: 
                price += m*(50); 
                discount += m*(50/10);
                wc_n = wc_n + m ;
                break; 
            case 2: 
                price += m*(60);
                discount +=  m*(60/12);
                dc_n  = dc_n +m;
                break;
            case 3: 
                price += m*(42);
                discount +=  m*(42/6);
                rc_n =rc_n + m;
                break;
            case 4: 
                price += m*(55); 
                discount += m*(55/8); 
                bc_n = bc_n *m;
                break;
            default: 
                printf("Invalid \n");

            // printf("Total cost: %d \n", price);
            // printf("Discount: %d \n", discount); 
            // printf("Total amount %f", m*(price-discount));



        }

    }
    void choco_sales()
    { 
        printf("White chocolate: %d \nDark chocolate: %d \nRaw chocolate: %d \nBittersweet chocolate: %d  \n", wc_n, dc_n, rc_n, bc_n);
    }

    void total_amt()
     {
         printf("Total amount:  %f \n",price-discount); 
     }

    void menu_sl()
    { 
        printf("Sl.no   Chocolate Type     Price (Rs.) Discount (%%)\n");
        printf("1       White Chocolate       50            10\n");
        printf("2       Dark Chocolate        60            12\n");
        printf("3       Raw Chocolate         42            6\n");
        printf("4    Bittersweet Chocolate    55            8\n");
        printf("\n\n"); 
        printf("Enter Sl_no:");
        scanf("%d", &n);
        printf("Enter number of chocolate:"); 
        scanf("%d", &m); 
    }
for(;;)
{
price = 0; 
discount =0 ;

menu_sl();
order_sl(n,m); 
total_amt();
choco_sales();
}
}

