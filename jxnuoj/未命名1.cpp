#include<iostream>
using namespace std;
int main()
{
    int m,n,list1[m][n],list2[m][n],i,i1;
    double sum=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(i1=0;i1<n;i1++){
            scanf("%d",list1[i][i1]);
        }
    }
    for(i=0;i<m;i++){
        for(i1=0;i1<n;i1++){
            scanf("%d",list2[i][i1]);
        }
    }
    for(i=0;i<m;i++){
        for(i1=0;i1<n;i1++){
            if(list1[i][i1]==list2[i][i1]){
                sum++;
            }
        }
    }
    printf("%.2lf",sum/(m*n));
}

