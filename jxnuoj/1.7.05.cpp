#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string a,b;
    getline=(cin,a);
    b=a;
    for(i=0;i<strlen(a);i++){
        if(i!=strlen(a)){
        b[i]=a[i]+b[i];
        }
        else{
            b[i]=a[0]+a[i];
        }
    }
    for(i=0;i<strlen(b);i++){
        cout<<b[i];
    }
    return 0;
}