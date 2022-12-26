#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char a[60],b[60];
    gets(a);
    int i,len;
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]>='x'&&a[i]<='z'){
			b[i]=a[i]-23;
		}
		else if(a[i]>='X'&&a[i]<='Z'){
			b[i]=a[i]-23;
		}
		else{
			b[i]=a[i]+3;
		}
    }
    reverse(b,b+len);
    for(i=0;i<len;i++){
        if(b[i]>=65&&b[i]<=90){
            b[i]=b[i]+32;
        }
        else if(b[i]>=97&&b[i]<=122){
            b[i]=b[i]-32;
        }
        cout<<b[i];
    }
    return 0;
}