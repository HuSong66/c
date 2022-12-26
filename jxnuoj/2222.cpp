#include<stdio.h>
double fact(int n);
int main()
{
int i,n;
double sum;
    sum=0;
    printf("Please put in n:");
    scanf("%d",&n);
for(i=1;i<=n;i++){
    sum=sum+fact(i);
    }
    printf("sum=%.0f\n",sum);	
return 0;
}

double fact(int n)
{int i;
double p;
    p=1;
for(i=1;i<=n;i++)
	p=p*i;
return p;
}