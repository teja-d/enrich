#include <stdio.h>

void main()
{
    int a[10][10],m,n,k,i,j;
    scanf("%d%d",&m,&n);
    scanf("%d",&k);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==k)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

