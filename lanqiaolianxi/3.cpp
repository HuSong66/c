#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int turn1(string a);
int main()
{
    int n,i,result;
    string b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>b;
        result=turn1(b);
        cout<<result;
    }
}
int turn1(string a)
{
    int sum,s;
    for(int c=0;c<sizeof(a)-1;c++){
       switch(a[c]){
        case '1':sum+=1;
        case '2':sum+=2;
        case '3':sum+=3;
        case '4':sum+=4;
        case '5':sum+=5;
        case '6':sum+=6;
        case '7':sum+=7;
        case '8':sum+=8;
        case '9':sum+=9;
        case 'B':sum+=11;
        case 'C':sum+=12;
        case 'D':sum+=13;
        case 'E':sum+=14;
        case 'F':sum+=15;
       }
    }
    return sum;
}
