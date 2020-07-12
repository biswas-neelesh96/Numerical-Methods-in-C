#include<stdio.h>
main()
{
    int n,i,j,k;
    printf("Enter the no. of constraints");
    scanf("%d",&n);
    float a[n][n+1],x[n],m;
    printf("Enter the augmented matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                m=a[j][i]/a[i][i];
                for(k=i;k<=n+1;k++)
                {
                    a[j][k]=a[j][k]-m*a[i][k];
                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n+1;j++)
        {
            x[i]=(a[i][n+1])/a[i][i];
        }
    }
    printf("\n Resultant Matrix \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n The Resultant Matrix \n");
    for(i=1;i<=n;i++)
    {
        printf("%f\t",x[i]);
    }
}
