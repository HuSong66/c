#include<iostream>
using namespace std;
int main()
{
    int n,i,j,num,i1,j1,step1=0,step2=0,step3=0,step4=0;
    cin>>n>>i>>j;
    int list1[n][n],list2[n][n];
    for(i1=0,num=0;i1<n;i1++){
        num++;
        for(j1=0;j1<n;j1++){
            list1[j1][i1]=num;
    }
    }
    for(i1=0,num=0;i1<n;i1++){
        num++;
        for(j1=0;j1<n;j1++){
            list2[i1][j1]=num;
    }
    }
    /*寻找左上*/
    for(i1=i,j1=j;list1[i1][j1]>1&&list2[i1][j1]>1;i1--,j1--){
        step1++;
    }
    /*寻找右下*/
    for(i1=i,j1=j;list1[i1][j1]>1&&list2[i1][j1]>1;i1++,j1++){
        step2++;
    }
    /*寻找右上*/
    for(i1=i,j1=j;list1[i1][j1]>1&&list2[i1][j1]>1;i1--,j1++){
        step3++;
    }
    /*寻找左下*/
    for(i1=i,j1=j;list1[i1][j1]>1&&list2[i1][j1]>1;i1++,j1--){
        step4++;
    }
    for(j1=0;j1<n;j1++){
        cout<<"("<<list1[i][j1]<<","<<list2[i][j1]<<")"<<" ";
    }
    for(i1=0;i1<n;i1++){
        cout<<"("<<list1[i1][j]<<","<<list2[i1][j]<<")"<<" ";
    }
    for(;step1>=0;step1--){
        cout<<"("<<list1[i-step1][j-step1]<<","<<list2[i-step1][j-step1]<<")"<<" ";
    }
    for(int count=1;count<step2;count++){
        cout<<"("<<list1[i+count][j+count]<<","<<list2[i+count][j+count]<<")"<<" ";
        cout<<"\n";
    }
    for(;step4>=0;step4--){
        cout<<"("<<list1[i+step4][j+step4]<<","<<list2[i-step4][j-step4]<<")"<<" ";
    }
    for(int count=1;count<step3;count++){
        cout<<"("<<list1[i-count][j-count]<<","<<list2[i+count][j+count]<<")"<<" ";
        cout<<"\n";
    }

    

}