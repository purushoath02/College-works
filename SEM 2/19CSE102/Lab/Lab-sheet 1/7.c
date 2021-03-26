#include<stdio.h>

int main()
{
    int n1,n2,n3,n4;
    printf("Enter 4 intergers ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    printf("\n");
    float sum = n1+n2+n3+n4;
    float p1, p2, p3, p4 ;
    p1 = (n1/sum)*100;
    p2 = (n2/sum)*100;
    p3 = (n3/sum)*100;
    p4 = (n4/sum)*100;
    printf("%f %f %f %f", p1, p2, p3, p4);
    return 0;


}