#include<stdio.h>
int main()
{
int n,a;
double count,sum;
scanf("%d",&n);
count=n;
sum=0;
while(count>0)
{
	scanf("%d",&a);
	sum=sum+a;
	count--;
}
printf("%.0lf %.5lf",sum,sum/n);
}
