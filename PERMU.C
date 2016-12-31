#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],k;
	int b[10],n,i,j,c=0,r,count,f=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		k=a[i];
		for(j=i+1;a[i]!='?' && j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]='?';
				count++;
			}
		}
		if(a[i]!='?' && count%2==1)
		{
			f++;
		}
		c=0;
		if(f>1)
		{
			printf("false");
			return 0;
		}
	}
	printf("true");
	return 0;
}
	 
