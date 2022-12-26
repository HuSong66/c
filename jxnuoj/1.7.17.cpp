#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char a[500],b[500],a1[500],b1[500];
    gets(a);
    gets(b);
    int len1=max(strlen(a),strlen(b)),count1=0,count2=0;
    for(int i=0;i<len1;i++){
        if(a[i]!=' '){
            a1[count1]=a[i];
            count1++;
        }
        if(b[i]!=' '){
            b1[count2]=b[i];
            count2++;
        }
    }
    int len2=max(strlen(a1),strlen(b1));
    for(int i=0;i<len2;i++){
        if(b1[i]>='a'&&b1[i]<='z'){
			b1[i]=b1[i]-32;
		}
        if(a1[i]>='a'&&a1[i]<='z'){
			a1[i]=a1[i]-32;
		}
        if(a1[i]>b1[i]){
            cout<<"NO";
            return 0;
        }
        else if(a1[i]<b1[i]){
            cout<<"NO";
            return 0;
        }
    }
    if(strlen(a1)==strlen(b1)){
        cout<<"YES";
    }
    return 0;
}