#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[600],b[600];
    int i,count=0;
    double c;
    cin>>c;
    cin>>a;
    cin>>b;
    for(i=0;i<strlen(a);i++){
        if(a[i]==b[i]){
            count++;
        }
    }
    if(c<=count*1.0/strlen(a)){
        cout<<"no";
    }
    else{
        cout<<"yes";
    }
    return 0;
   
}