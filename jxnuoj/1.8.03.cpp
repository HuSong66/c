#include<iostream>
using namespace std;
int main()
{
    int n1,n2,list1[105][105],i,j,sum=0;
    cin>>n1>>n2;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            cin>>list1[i][j];
    }
    }
    if(n1==1||n2==1){
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                sum+=list1[i][j];
    }
    }
        cout<<sum;
    }
    else{
    for(i=0,j=0;i<n1;i++){
        sum+=list1[i][j];
    }
    for(i=0,j=0;j<n2;j++){
        sum+=list1[i][j];
    }
    for(i=0,j=n2-1;i<n1;i++){
        sum+=list1[i][j];
    }
    for(i=n1-1,j=0;j<n2;j++){
        sum+=list1[i][j];
    }
    sum=sum-(list1[0][0]+list1[0][n2-1]+list1[n1-1][0]+list1[n1-1][n2-1]);
    cout<<sum;
    }
    return 0;
}