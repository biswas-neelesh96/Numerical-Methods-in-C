#include<stdio.h>
main()
{
    int n,i,j;
    float s,p,xp;
    printf("Enter the no. of poles");
    scanf("%d",&n);

    float x[n],y[n];
    printf("Enter the values of x");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }

    printf("Enter the values of y");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }

    printf("Enter the value of interpolating point");
    scanf("%f",&xp);

    s=0;
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            p=p*(xp-x[j])/(x[i]-x[j]);
        }
        s=s+p*y[i];
    }
    printf("Resultant value=%f",s);
}
