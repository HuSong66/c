#include<iostream>
using namespace std;

int main()
{
   int N,NA,NB,list1[100], list2[100],i,i2,count=0, scoreA=0, scoreB=0;
    scanf("%d %d %d",&N,&NA,&NB);
    if(NA<N){
        for(i=0;i<NA;i++){
            cin>>list1[i];
            for(i2=NA;i2<N;i2++){
            list1[i2]=list1[count];
            count++;
            if(count==NA){
                count=0;
    }
    }
    }
    }
    else{
        for(i=0;i<NA;i++){
            cin>>list1[i];
    }
    if(NB<N){
        for(i=0;i<NB;i++){
            cin>>list2[i];
            for(i2=NB;i2<N;i2++){
                list2[i2]=list2[count];
                count++;
                if(count==NB){
                    count=0;
    }
    }
    }
    }
    else{
        for(i=0;i<NB;i++){
            cin>>list2[i];}
    }

    for(i=0;i<N;i++){
    if(list1[i]==0&&list2[i]==2){
    scoreA++;}
    else if(list1[i]==0&&list2[i]==5){
    scoreB++;}
    else if(list1[i]==2&&list2[i]==5){
    scoreA++;}
    else if(list1[i]==2&&list2[i]==0){
    scoreB++;}
    else if(list1[i]==5&&list2[i]==0){
    scoreA++;}
    else if(list1[i]==5&&list2[i]==2){
    scoreB++;}
    }
    if(scoreA>scoreB){
    printf("A");
    }
    else if(scoreA<scoreB){
    printf("B");
    }
    else if(scoreA==scoreB){
    printf("draw");
    }
    return 0;

}