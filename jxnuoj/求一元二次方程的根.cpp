#include<stdio.h>
#include<math.h>
int main()
{double a,b,c,s,x,x1,x2;
scanf("%lf %lf,%lf",&a,&b,&c);
if(b*b-4*a*c<0){
	s=-b/(2*a);
	x=sqrt(4*a*c-b*b)/(2*a);
	printf("x1=%.5lf+%.5lf;x2=%.5lf-%.5lf",s,x,s,x);
}
else{	
	x1=(-b + sqrt(b*b-4*a*c))/(2*a);
	x2=(-b - sqrt(b*b-4*a*c))/(2*a);
	if(b*b == 4 * a * c){
	printf("x1=x2=%.5lf",x1);
	}
	else if(b*b > 4 * a * c){
		printf("x1=%lf;x2=%.5lf,ÆäÖÐx1>x2",x1,x2);
	}	
}
return 0;
}

