#include<stdio.h>
main()
{
    int n,i,j,k;
    printf("Enter the no. of constraints");
    scanf("%d",&n);
    float a[n][n+1],x[n],s;

    printf("Enter the Augmented Matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }

    printf("Enter the value of initial approximation");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x[i]);
    }

    printf("\nResultant Matrix\n");
    for(k=1;k<=20;k++)
    {
        printf("\nk=%d\t",k);
        for(i=1;i<=n;i++)
        {
            s=a[i][n+1];
            for(j=1;j<=n;j++)
            {
                if(i!=j)
                    s=s-(a[i][j]*x[j]);
            }
                x[i]=s/a[i][i];
                printf("x[%d]=%f\t",i,x[i]);
        }
    }
}
