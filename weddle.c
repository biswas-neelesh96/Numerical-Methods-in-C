#include<stdio.h>
float f(float x)
{
    return(1/(x*x+2*x+10));
}
main()
{
    int n,i;
    float h,s,x0,xn;

    printf("Enter the no. of sub-intervals");
    scanf("%d",&n);

    printf("Enter the value of initial point");
    scanf("%f",&x0);

    printf("Enter the value of final point");
    scanf("%f",&xn);

    h=(xn-x0)/n;
    s=f(x0)+f(xn)+5*f(x0+h)+f(x0+(2*h))+6*f(x0+(3*h))+f(x0+(4*h))+5*f(x0+(5*h));

    for(i=7;i<n;i+=6)
    {
        s=s+5*f(x0+i*h)+5*f(x0+(i+4)*h)+6*f(x0+(i+2)*h)+f(x0+(i+1)*h)+2*f(x0+(i-1)*h)+f(x0+(i+3)*h);
    }
    s=s*((3*h)/10);
    printf("The integral value of f(x)=%f",s);
}
