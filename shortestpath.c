
 #include<stdio.h>
 int x[50][50];
 int d[50][50];
 void apsc(int n)
 {
    int i,j,k,q;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x[i][j]=d[i][j];
        }
        printf("\n x0:\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        { 
            printf("%d\t",x[i][j]);

        }
        printf("\n");
    }
    for(k=1;k<=n;k++)
    {
        printf("\n x%d\n",k);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                q=x[i][k]+x[k][j];
                if (q<x[i][j])
                    x[i][j]=q;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",x[i][j]);

        }
        printf("\n");
    } 
}

int main()
{
    int n;
    printf("enter the no. of nodes:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("\n d[%d][%d]:",i,j);
            scanf("%d",&d[i][j]);
        }
    }
    apsc(n);
    return 0;
}
