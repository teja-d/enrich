#include<stdio.h>
void main()
{
  int sum=0,a,n,r=0;
  rintf("enter n value");
  scanf("%d",&n);
  while(n>0)
  {
    a=n%10;
    sum+=a;
    n=n/10;
    r++;
  }
  printf("the no of digits is %d",r);
  printf("the sum of digits is %d",sum);
  }
