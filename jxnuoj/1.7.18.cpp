#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[205],b[205];
    gets(a);
    gets(b);
    int judge,len;
    if(strlen(a)>=strlen(b)){
        len=strlen(a);
        judge=1;
    }
    else{
        len=strlen(b);
        judge=0;
    }
    if(judge){
        for(int i=0;i<len;i++){
            if(a[i]==b[0]){
                for(int j=0,i1=i;j<strlen(b)+1;i1++,j++){
                    if(j==strlen(b)){
                        printf("%s is substring of %s",b,a);
                        return 0;
                    }
                    if(a[i1]!=b[j]){
                        break;
                    }
                }
            }
        }
    }
    else{
        for(int i=0;i<len;i++){
            if(b[i]==a[0]){
                for(int j=0,i1=i;j<strlen(a)+1;i1++,j++){
                    if(j==strlen(a)){
                        printf("%s is substring of %s",a,b);
                        return 0;
                    }
                    if(b[i1]!=a[j]){
                        break;
                    }
                }
            }
        }
    }
    cout<<"No substring";
}