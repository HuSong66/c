#include<stdio.h>
int main()
{
    int i,n;
    double price[100]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&n);
        sum=price[i]*n+sum;
    }
printf("%.1lf",sum);
}