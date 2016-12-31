#include<stdio.h>
void main()
{
	int a[10],i,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
    occur(a,n,k);
}
int occur(int a[],int n,int k)
{
	int l=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			l++;
		}
	}
	printf("occourence of %d is %d",k,l);
	return 0;
}
