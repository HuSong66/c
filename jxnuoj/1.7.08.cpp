#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[1000];
    char n,m;
    int i,len;
    gets(a);
    scanf("%c %c",&n,&m);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]==n){
            a[i]=m;
        }
        printf("%c",a[i]);
    }
    return 0;


}