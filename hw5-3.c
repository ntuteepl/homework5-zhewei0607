#include<stdio.h>
#include<stdlib.h>

int main()
{
      float a,b,c1,c2,c3;
      scanf("%f%f",&a,&b);
      if(a<=60)
      {
          c1=a*b;
          printf("%.1f",c1);
      }
      else if(a>60 && a<=120)
      {
          c1=(float)60*b;
          a=a-60;
          c2=a*b*(float)133/(float)100;
          printf("%.1f",(c1+c2));
      }
      else
      {
          c1=(float)60*b;
          a=a-60;
          c2=(float)60*b*(float)133/(float)100;
          a=a-60;
          c3=a*b*(float)166/(float)100;
          printf("%.1f",(c1+c2+c3));
      }
}

