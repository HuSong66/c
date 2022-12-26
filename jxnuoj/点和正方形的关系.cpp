#include<stdio.h>
int main()
{int x,y,a;
char z;
scanf("%d %d %c",&x,&y,&z);
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
printf("%d",a);	
return 0;
}
