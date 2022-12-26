#include<stdio.h>
int main()
{
double n,a;
double count,sum;
scanf("%lf",&n);
count=n;
sum=0;
while(count>0)
{
	scanf("%lf",&a);
	sum=sum+a;
	count--;
}
printf("%.4lf",sum/n);
}
