#include<stdio.h>
int main()
{
    int a,b,x,sum;
    sum=0;
    scanf("%d %d",&a,&b);
    for(x=a;x<=b;x++);
    if(x%2!=0){
    	sum=x+sum;
	}
    printf("%d",sum);
    return 0;
}
