#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[10000];
    int i,len;
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if((a[i]>='a'&&a[i]<'z')||(a[0]>='A'&&a[0]<'Z')){
            a[i]+=1;
        }
        else if(a[i]=='z'){
			a[i]='a'; 
		}
		else if(a[i]=='Z'){
			a[i]='A'; 
		}
        cout<<a[i];
    }
    return 0;
}