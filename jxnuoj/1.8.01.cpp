#include<iostream>
using namespace std;
int main()
{
    int a[6][5],b[6][5],i,n,m,j;
    for(i=1;i<6;i++){
        for (j=0;j<5;j++){
            cin>>a[i][j];   
        }        
    }
    cin>>n>>m;
    for(i=1;i<6;i++){
        if(i==n){
            for(j=0;j<5;j++){
                b[i][j]=a[m][j];
            }
        }
        else if(i==m){
            for(j=0;j<5;j++){
                b[i][j]=a[n][j];
            }
        }
        else{
            for(j=0;j<5;j++){
                b[i][j]=a[i][j];
            }
        }
    }
    for(i=1;i<6;i++){
        for(j=0;j<5;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
    
}