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
    s=f(x0)+f(xn);

    for(i=1;i<n;i++)
    {
        s=s+2*f(x0+(i*h));
    }
    s=s*(h/2);
    printf("The integral value of f(x)=%f",s);
}
