#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int N = 1000000;
    int a[N];
    int b = sort(a,strlen(a));
    int pay = 0;
    
}   
int jud(int judge)
{
    int count = 0;
    while(judge)
    {
        pay += swap(*a[count], *a[count+1]);
        if (a = b){judge=0}
        count++ ;
        if (count = strlen(a) && judge)
        {
            return jud;
        }
        else return pay;
    }
}
int swap(int *x, int *y)
{   
    int temp = *x;
    if (x>y) {*x = *y;*y = temp;return x;}
    else return 0;
}