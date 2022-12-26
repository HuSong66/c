
#include  <stdio.h>

int main()
{double x;
scanf("%lf",&x);
if (0<=x<5){
	printf("%.3lf",x+2.5);
}
 else if(5<=x<10)
 {printf("%.3lf",2-(1.5*(x-3)*(x-3)));
 }
 else if(10<=x<20){
 	printf("%.3lf",(x/2)-1.5);
 }
 return 0;}
