#include<stdio.h>
int main()
{
int n,a;
int count,max,min;
scanf("%d",&n);
count=n;
max=0;
while(count>0)
{
	scanf("%d\b",&a);
	if(a>max){
		max=a;
	}
    if(a<min){
		min=a;
	}
	count--;
}
printf("%d",max-min);
}
