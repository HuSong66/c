#include<stdio.h>
int main()
{
    int x,i,a=0,b=0,c=0,d=0;
    double n;
    scanf("%lf",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>0&&x<=18){
            a++;
        }
        else if(x>18&&x<=35){
            b++;
        }
        else if(x>35&&x<=60){
            c++;
        }
        else if(x>60){
            d++;
        }

    }
    printf("%.2lf",(a/n)*100);
    printf("%%\n");
    printf("%.2lf",(b/n)*100);
    printf("%%\n");
    printf("%.2lf",(c/n)*100);
    printf("%%\n");
    printf("%.2lf",(d/n)*100);
    printf("%%");
}