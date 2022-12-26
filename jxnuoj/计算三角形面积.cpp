#include<stdio.h>
#include<math.h>
int main()
{double x1,y1,x2,y2,x3,y3,d;
scanf("%lf %lf/n",&x1,&y1);
scanf("%lf %lf/n",&x2,&y2);
scanf("%lf %lf",&x3,&y3);
d=0.5*((x1*y2-x2*y1)+(x2*y3-x3*y2)+(x3*y1-x1*y3));
printf("%.2lf",d);
return 0;}
