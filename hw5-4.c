#include<stdio.h>
#include<stdlib.h>

int main()
{
      float hour,min,hourdeg,mindeg,deg;
      scanf("%f%f",&hour,&min);
      hourdeg=hour*(float)30+min*(float)5/(float)10;
      mindeg=min*(float)6;
      if(mindeg>hourdeg)
      {
          if(mindeg-hourdeg>180)
          {
               deg=mindeg-hourdeg;
               deg=360-deg;
               printf("%.1f",deg);
          }
          else
          {
               deg=mindeg-hourdeg;
               printf("%.1f",deg);
          }
      }
      else if(mindeg<hourdeg)
      {
          if(hourdeg-mindeg>180)
          {
               deg=hourdeg-mindeg;
               deg=360-deg;
               printf("%.1f",deg);
          }
          else
          {
               deg=hourdeg-mindeg;
               printf("%.1f",deg);
          }
      }
      else
      {
          printf("0");
      }
}

