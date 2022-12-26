#include<iostream>
using namespace std;
int main()
{
    int n,i,j,list1[105][105],mark1,mark2,judge=0,temp;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>list1[i][j];
    }
    }
    for(i=0;i<n;i++){
        if(temp%2!=0){
            judge+=1;
            mark1=i;
        }
        temp=0;
        for(j=0;j<n;j++){
            temp+=list1[i][j];
    }
    }
    for(j=0;j<n;j++){
        if(temp%2!=0){
            judge+=1;
            mark2=j;
        }
        temp=0;
        for(i=0;i<n;i++){
            temp+=list1[i][j];
    }
    }
    if(judge==0){
        cout<<"OK";
    }
    else if(judge<=2){
        cout<<mark1<<" "<<mark2;
    }
    else{
        cout<<"Corrupt";
    }
    return 0;
}