#include<iostream>
using namespace std;
int main()
{
    int a[10000000],i,sum;
    for(int i=0; i<100; i++){
        cin>>a[i];
    }
    int c=sizeof a;
    for(i=0;i<c;i++){
        sum+=a[i];
        cout<<sum<<" ";
    }
    return 0;
}
