#include<stdio.h>
int main()
{int a1,d;
char b;
scanf("%d %c",&a1,&b);
if(b=='y'){
if(a1<=1000){
	d=8+5;
}
else if((a1%500)!=0){
	d=((((a1-1000)/500)+1)*4)+8+5;
}
else{
	d=(((a1-1000)/500)*4)+8+5;
}
}
if(b=='n'){
if(a1<=1000){
	d=8;
}
else if((a1%500)!=0){
	d=((((a1-1000)/500)+1)*4)+8;
}
else{
	d=(((a1-1000)/500)*4)+8;
}
}
printf("%d",d);
return 0;
}
