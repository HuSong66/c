#include<stdio.h>
int main()
{
    int l,m,i,x,y,i1,sum=0,g,h;
    scanf("%d %d",&l,&m);
    int list1[10000];
    for(i=0;i<l;i++){
        list1[i]=1;
    }
    for(g=0;g<m;g++){
        scanf("%d %d",&x,&y);
        for(i1=x;i1<y;i1++){
            list1[i1]=0;
        }
    }
    for(h=0;h<l;h++){
        sum=list1[h]+sum;
    }
    printf("%d",sum);
}