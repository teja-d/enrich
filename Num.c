#include<stdio.h>
void main()
{
	int n,a,b=1,c;
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		a=a/10;
		b=b*10;
	}
  b=b/10;
	c=n/b;
	n=n+c;
	printf("%d\n",n);
}	
