#include<stdio.h>
int main()
{int x,a,b,c;
scanf("%d",&x);
a=x/100;
b=(x-a*100)/10;
c=(x-a*100-b*10);
printf("%d%d%d",c,b,a);
return 0;
}
