#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100006];
    int b[100006]={0},i,j;
    cin>>a;
    for(i=0;i<strlen(a);i++){
        for(j=0;j<strlen(a);j++){
            if(a[j]==a[i]){
                b[i]++;
            }        
        }
        if(b[i]==1){
            cout<<a[i];
            return 0;
        }
    }
    cout<<"no";
    return 0;
}