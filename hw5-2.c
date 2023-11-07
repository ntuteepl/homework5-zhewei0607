#include<stdio.h>
#include<stdlib.h>

int main()
{
      float a,b,c;
      scanf("%f",&a);
      if(a<=800)
      {
          a=a*(float)9/(float)10;
          printf("%.1f",a);
      }
      else if(a>800 && a<=1500)
      {
          a=a*(float)9/(float)10*(float)9/(float)10;
          printf("%.1f",a);
      }
      else
      {
          a=a*(float)9/(float)10*(float)7*(float)9/(float)100;
          printf("%.1f",a);
      }
}

