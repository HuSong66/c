#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int m,n,i,i1,i2,i3;
    int list1[100][100],list2[100][100];
    double sum=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(i1=0;i1<n;i1++){
            scanf("%d",&list1[i][i1]);
        }
    }
    for(i2=0;i2<m;i2++){
        for(i3=0;i3<n;i3++){
            scanf("%d",&list2[i2][i3]);
        }     
    }
    for(i=0;i<m;i++){
        for(i1=0;i1<n;i1++){
            if(list1[i][i1]==list2[i][i1]){
                sum++;
            }
        }
    }
    printf("%.2lf",sum*100/(m*n));
}
