#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    scanf("%d", &i);

    int o = i % 10;
    i = floor(i/10);
    int t = i% 10;
    i = floor(i/10);
    int h = i% 10;
    i = floor(i/10);
    int t4 = i% 10;
    i = floor(i/10);
    int t5 = i% 10;
    int sum = o+h+t+t4+t5;
    printf("%d", sum);
    return 0 ;
    
}