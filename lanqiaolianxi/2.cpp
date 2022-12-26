#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int list1[205];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>list1[i];
    }
    sort(list1,list1+n);
    for(i=0;i<n;i++){
        cout<<list1[i]<<' ';
    }
    return 0;
}
