#include<stdio.h>
int main()
{int a,b,c,d,sum;
sum=0;
scanf("%d",&a);
int list1[a-1];
for(int x=0;x<a;x++){
	scanf("%d",&b);
	list1[x] = b;
}
scanf("%d",&c);
for(int y = 0;y<=a;y++){
	d = list1[y];
	if(d==c){
		sum++;
	}
}
printf("%d",sum);
return 0;
 } 
