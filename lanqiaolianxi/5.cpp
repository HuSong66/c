#include<iostream>
using namespace std;
int main()
{
    int a[100000],i,sum;    
    int c=sizeof a;
    for(i=0;i<c;i++){
        sum+=a[i];
        cout<<sum<<" ";
    }
    return 0;
}