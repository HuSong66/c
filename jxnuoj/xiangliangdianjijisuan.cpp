#include<iostream>
using namespace std;
int main()
{
    int i,n,list1[1000],list2[1000],sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>list1[i];
    }
    for(i=0;i<n;i++){
        cin>>list2[i];
    }
    for(i=0;i<n;i++){
        sum+=list1[i]*list2[i];
    }
    cout<<sum;
}