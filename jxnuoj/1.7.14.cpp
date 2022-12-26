#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char a[25];
    cin>>n;
    for(int i=1;i<=a;i++){
		scanf("%s",b);
		len=strlen(b);
		if(b[0]>='a'&&b[0]<='z'){
			b[0]=b[0]-32;
		}
		for(int j=1;j<len;j++){
			if(b[j]>='A'&&b[j]<='Z'){
				b[j]=b[j]+32;
			}
		}
		printf("%s\n",b);
		memset(b,0,sizeof(b));
	}
    return 0;
}