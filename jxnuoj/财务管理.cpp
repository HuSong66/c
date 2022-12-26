#include<stdio.h>
int main()
{
double a;
double count,sum;
count=12;
sum=0;
while(count>0)
{
	scanf("%lf",&a);
	sum=sum+a;
	count--;
}
printf("$%.2lf",sum/12);
}
