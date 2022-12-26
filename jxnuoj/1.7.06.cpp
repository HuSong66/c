#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a;
    int i,len,judge;
    getline(cin,a);
    len=sizeof(a)-1;
    if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')
    ||a[0]=='_'){
            judge=1;
        }
    else{
        cout<<"no";
        return 0;
    }
    for(i=1;i<len;i++){
        if(not ((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')
        ||(a[i]>='0'&&a[i]<='9')||a[0]=='_')){
            judge-=1;
            break;
        }
    }
    if(judge){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}