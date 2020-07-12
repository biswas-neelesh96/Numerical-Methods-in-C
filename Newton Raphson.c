#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(2*(x*x*x)+(x*x)-(20*x)+12);
}
float df(float x)
{
    return(6*(x*x)+(2*x)-20);
}
main()
{
    int i;
    float a,x;
    for(i=0;i<=20;i++)
        if(f(x)*f(i+1)<0)
            break;
    a=i+1;
    do
    {
        x=a-(f(a)/df(a));
        a=x;
    }
    while(fabs(f(x))>0.0001);
    printf("The root of f(x)=%f",x);
}
