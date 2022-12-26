#include<stdio.h>
int main()
{
    int list1[100],i=0,n,x,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        list1[i]=x;
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",list1[i]);
    }
}