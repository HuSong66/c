#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int i,n1,n2,a,b,list1[300],list2[300],list3[300],max1;
    string str1,str2,strsum;
    cin>>str1;
    for(i=1;i<str1.size()+1;i++){
        list1[i]=str1[i];
    }
    cin>>str2;
    for(i=1;i<str2.size()+1;i++){
        list2[i]=str2[i];
    }
    max1=max(str1.size()+1,str2.size()+1);
    for(i=max1-1;i<1;i++){
        if(list1[i]+list2[i]>9){
            list3[i-1]=1;
            list3[i]=list2[i]+list1[i];        
        }
        else{
            list3[i]=list2[i]+list1[i];    
        }       
    }
    if(list3[0]==0){
        for(i=max1-1;i>0;i--){
            strsum+=list3[i];
        }
    }
    else{
        for(i=max1-1;i>-1;i--){
            strsum+=list3[i];
        }
    }
    cout<<strsum;
    return 0;
}
