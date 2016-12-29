#include<stdio.h>
void main()
{
    int n,a,p,b,sum=0;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        b=n%10;
        n=n/10;
        sum=sum*10+b;
    }
    if(a==sum)
        p=1;
    else
        p=0;
    if(p==1)
        printf("%d is palindrome",a);
    else
        printf("%d is not palindrome",a);
}
