#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,x,y,i,i1,i2,list1[1000],list2[1000],a=1;
    bool judge;
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
    scanf("%d ",&list2[i]);
    }
    for(i2=0;i2<i-1;i2++){
        list1[i2]=abs(list2[i2]-list2[i2+1]);
    }
    sort(list1, list1+n-1);
    for(i1=0;i1<n-2;i1++){
        if(list1[i1]==a){
            judge=1;
        }
        else{
            judge=0;
        }
        a++;
    }
    if(judge){
        printf("Jolly");
    }
    else{
        printf("Not jolly");
    }

}