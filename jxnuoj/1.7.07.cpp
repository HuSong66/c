#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,count=0;
    char a[260],b[260];
    gets(a);
    int len=sizeof a;
    for(i=0;i<len;i++){
        if(a[i]==0){
            break;
        }
        count++;
        switch (a[i])
        {
        case 'A':
            b[i]='T';
            break;
        case 'T':
            b[i]='A';
            break;
        case 'G':
            b[i]='C';
            break;
        case 'C':
            b[i]='G';
            break;
        default:
            break;
        }
    }
    for(i=0;i<count;i++){
        cout<<b[i];
    }
    return 0;
}