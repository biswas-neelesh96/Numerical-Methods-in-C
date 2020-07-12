#include<stdio.h>
main()
{
    int n,i,j,k;
    printf("Enter the no. of constraints");
    scanf("%d",&n);
    float s,a[n][n+1],x[n],m;
    printf("Enter the augmented matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=i+1;j<=n;j++)
            {
                m=a[j][i]/a[i][i];
                for(k=i;k<=n+1;k++)
                {
                    a[j][k]=a[j][k]-m*a[i][k];
                }
            }
    }
    x[n]=a[n][n+1]/a[n][n];
    for(i=n-1;i>=1;i--)
    {
        s=0;
        for(j=i+1;j<=n;j++)
        {
            s=s+a[i][j]*x[j];
        }
        x[i]=(a[i][n+1]-s)/a[i][i];
    }
    printf("\nResultant Upper Triangular Matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nResultant Variable matrix\n");
    for(i=1;i<=n;i++)
    {
        printf("%f\t",x[i]);
    }
}

