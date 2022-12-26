#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char a[85],b[85];
    int len;
    gets(a);
    gets(b);
    len=max(strlen(a),strlen(b));
    for(int i=0;i<len;i++){
        if(b[i]>='a'&&b[i]<='z'){
			b[i]=b[i]-32;
		}
        if(a[i]>='a'&&a[i]<='z'){
			a[i]=a[i]-32;
		}
        if(a[i]>b[i]){
            cout<<">";
            return 0;
        }
        else if(a[i]<b[i]){
            cout<<"<";
            return 0;
        }
    }
    if(strlen(a)==strlen(b)){
        cout<<"=";
        }
    else if(strlen(a)>strlen(b)){
        cout<<">";
    }
    else if(strlen(a)<strlen(b)){
        cout<<"<";
    }
    return 0;
}