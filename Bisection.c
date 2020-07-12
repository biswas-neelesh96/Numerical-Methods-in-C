#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(2*(x*x*x)+(x*x)-(20*x)+12);
}
main()
{
    int i;
    float a,b,x;
    for(i=0;i<=20;i++)
        if(f(x)*f(i+1)<0)
            break;
    a=i;
    b=i+1;
    do
    {
        x=(a+b)/2;
        if(f(a)*f(x)<0)
            b=x;
        else
            a=x;
    }
    while(fabs(f(x))>0.0001);
    printf("The root of f(x)=%f",x);
}
