#include<stdio.h>
main()
{
    int n,sum=0,r;
    printf("enter n value");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("\nreverse is %d",sum);
}
