#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i=0,count=0;
    char c[256];
    gets(c);
    for(;i<strlen(c);i++){
        if(c[i]>='0'&&c[i]<='9'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}