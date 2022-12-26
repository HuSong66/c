#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char b[105];
    gets(b);
    for(int i=0;i<strlen(b);i++){
        if(b[i]>=97&&b[i]<=122){
            b[i]=b[i]-32;
        }
        else if(b[i]>=65&&b[i]<=90){
            b[i]=b[i]+32;
        }
        cout<<b[i];
    }
    return 0;
}