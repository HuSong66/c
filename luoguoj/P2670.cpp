#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;    
    char a[110][110];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int count=0;
            if(a[n][m]=='?'){
                if(a[n-1][m-1]=='*'){
                    count++;
                }
                if(a[n-1][m]=='*'){
                    count++;
                }
                if(a[n-1][m+1]=='*'){
                    count++;
                }
                if(a[n][m-1]=='*'){
                    count++;
                }
                if(a[n][m+1]=='*'){
                    count++;
                }
                if(a[n+1][m-1]=='*'){
                    count++;
                }
                if(a[n+1][m]=='*'){
                    count++;
                }
                if(a[n+1][m+1]=='*'){
                    count++;
                }
                a[n][m]=count;
            }
            cout<<a[n][m];
        }
        cout<<"\n";
    }
    return 0;
}