#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   int n,i,judge=0;
   cin>>n;
   for(i=0;i<n;i++){
    char cont1[10],cont2[10];
    cin>>cont1;
    cin>>cont2;
    if(strlen(cont1)==4&&strlen(cont2)==8){
        judge++;
    }
    else if (strlen(cont1)==4&&strlen(cont2)==5){
        judge--;
    }
    else if(strlen(cont1)==5&&strlen(cont2)==8){
        judge--;
    }
    else if(strlen(cont1)==5&&strlen(cont2)==4){
        judge++;
    }
    else if(strlen(cont1)==8&&strlen(cont2)==4){
        judge--;
    }
    else if(strlen(cont1)==8&&strlen(cont2)==5){
        judge++;
    }
    if(judge>0){
        cout<<"player1";
    }
    if(judge==0){
        cout<<"tie";
    }
    if(judge<0){
        cout<<"player2";
    }
    return 0;
    }
}