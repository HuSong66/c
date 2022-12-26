#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int n,i;
    string b,result;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>b;
        result=turn(b);
        cout<<result;
    }
}
string turn(string a)
{
    string res1="";
    for(int c=0;c<sizeof(a)-1;c++){
        switch(a[c]){
            case '0': res1 += "0000"; break;
			case '1': res1 += "0001"; break;
			case '2': res1 += "0010"; break;
			case '3': res1 += "0011"; break;
			case '4': res1 += "0100"; break;
			case '5': res1 += "0101"; break;
			case '6': res1 += "0110"; break;
			case '7': res1 += "0111"; break;
			case '8': res1 += "1000"; break;
			case '9': res1 += "1001"; break;
			case 'A': res1 += "1010"; break;
			case 'B': res1 += "1011"; break;
			case 'C': res1 += "1100"; break;
			case 'D': res1 += "1101"; break;
			case 'E': res1 += "1110"; break;
			case 'F': res1 += "1111"; break;
        }
    }
    return res1;
}
