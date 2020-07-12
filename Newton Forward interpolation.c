#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter the no. of poles");
    scanf("%d",&n);
    float p,s,u,xp,h,x[n],y[n],f[n][n];

    printf("Enter the values of x\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }

    printf("Enter the values of y\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }

    printf("Enter the value of interpolating point");
    scanf("%f",&xp);
    s=y[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            f[i][j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        f[0][i]=y[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            f[i][j]=f[i-1][j+1]-f[i-1][j];
        }
    }

    printf("\nDifference Table\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%f\t",f[i][j]);
        }
        printf("\n");
    }
    h=x[1]-x[0];
    u=(xp-x[0])/h;
    p=1;

    for(i=1;i<n;i++)
    {
        p=p*(u-i+1)/i;
        s=s+p*f[i][0];
    }
    printf("\nResultant value=%f",s);

}
