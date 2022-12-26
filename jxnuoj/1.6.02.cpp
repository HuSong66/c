#include<stdio.h>
int main(void) 
{
	int a,i,high,sum=0;
	int list1[10];
	for(i=0;i<10;i++){
		scanf("%d",&a);
		list1[i]=a;
	}
	scanf("%d",&high);
	for(i=0;i<10;i++){
		if(high+30>=list1[i]){
			sum++;
		}
	}
printf("%d",sum);
}
