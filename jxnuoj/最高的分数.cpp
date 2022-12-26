#include<stdio.h>
int main()
{
int n,a;
int count,max;
scanf("%d",&n);
count=n;
max=0;
while(count>0)
{
	scanf("%d",&a);
	if(a>max){
		max=a;
	}
	count--;
}
printf("%d",max);
}
