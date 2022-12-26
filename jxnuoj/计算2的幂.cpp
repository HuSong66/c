#include<stdio.h>
int main()
{int n,x;
scanf("%d",&n);
x=1;
while(n>0){
	x=x*2;
	n--;
}
printf("%d",x);
return 0;
}
