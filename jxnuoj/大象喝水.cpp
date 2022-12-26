#include<stdio.h>
int main()
{int h,r,n;
double v;
scanf("%d %d",&h,&r);
v=h*r*r*0.001*3.14159;
n=v/20;
printf("%d",n+1);
return 0;
}
