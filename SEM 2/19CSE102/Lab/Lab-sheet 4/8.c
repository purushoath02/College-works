#include<stdio.h>
const double pi = 22.0 / 7.0;


int main()
{ 
    float acircle()
    { 
        int area,r; 
        printf("%d Enter radius of circle. \n"); 
        scanf("%d", &r);
        area = pi*r * r; 
        return area; 

    }

    float pcircle()
    { 
        int peri, r; 
        printf("%d Enter radius of circle. \n"); 
        scanf("%d", &r);
        peri= 2*pi*r; 
        return peri; 


    }
    
    float arect()

    { 
        int l , b; 
        printf("Enter length and breadth of the rectangle. \n");
        scanf("%d %d", &l ,&b);
        return l*b; 

    }
    float prect()
    { 
        int l , b; 
        printf("Enter length and breadth of the rectangle. \n");
        scanf("%d %d", &l ,&b);
        return l+l+b+b;
    }

int a ; 
printf("For area of circle enter 1\n"); 
printf("For perimeter of cicle enter 2\n"); 
printf("For area of rectangle enter 3 \n"); 
printf("For perimeter of rectagle enter 4\n"); 

scanf("%d", &a);

switch (a)
{
    case 1:
        printf("%f\n", acircle());
        break;
    case 2: 
        printf("%f", pcircle());
        break;
    case 3: 
        printf("%f", arect()); 
        break;
    case 4: 
        printf("%f", prect()); 
        break; 
    default: 
        printf("INVALID"); 


return 0 ; 












    

    


}
}