
#include<stdio.h>
#include<math.h>
 
int main()
{
      int n = 0, r, h;
      int i;
    
      scanf("%d", &h); 
      for(i= 0; h > 0; i++)
      {
            r = h % 10;
            n = n + r * pow(16, i);
            h = h / 10;
      }
      printf("%d", n);
      return 0;
}