#include<stdio.h>
int main()
{
int n,j,sum,a;
scanf("%d",&n);
j=(n-2)*180;
while(n-1>0){
	scanf("%d\b",&a);
	sum+=a;
	n--;
}
printf("%d",j-sum);
return 0;
}
