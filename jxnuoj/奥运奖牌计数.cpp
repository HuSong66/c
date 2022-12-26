#include<stdio.h>
int main()
{
int n,a,b,c,j,y,t;
j=y=t=0;
scanf("%d",&n);
while(n>0){
	scanf("%d %d %d",&a,&b,&c);
	j+=a;
	y+=b;
	t+=c;
	n--;
}
printf("%d %d %d %d",j,y,t,j+y+t);
return 0;
}
