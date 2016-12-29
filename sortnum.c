#include <stdio.h>

int main(void) 
{
    int a[10],n,b,i,j,temp=0;
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
    b=i;
    for(i=0;i<b-1;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    temp=0;
    for(i=0;i<b;i++)
    {
        temp=temp*10+a[i];
    }
    printf("increasing order:%d",temp);
	return 0;
}

