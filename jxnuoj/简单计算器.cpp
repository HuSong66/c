#include<stdio.h>
int main()
{int x,y,a;
char z;
scanf("%d %d %c",&x,&y,&z);
if(y==0&&z=='/'){
	printf("Divided by zero!");
}
else if(z!='+'&&z!='-'&&z!='*'&&z!='/'){
	printf("Invalid operator!");
}
else{
	switch(z){
	case '+':
		a=x+y;
		break;
	case '-':
		a=x-y;
		break;	
	case '*':
		a=x*y;
		break;
	case '/':
		a=x/y;
		break;
}
printf("%d",a);}
return 0;
}
