#include <stdio.h>

int main(void) {
	char a[10],b[10];
	int i,r,f=0,j=0;
	scanf("%s",a);
	for(i=0;i<=10;i++)
	{
	    if(a[i]=='\0')//finding length
	    {
	        r=i;
	        break;
	    }
	}
	for(i=r-1;i>=0;i--)
	{
	    b[j]=a[i];//str reverse
	    j++;
	}
	b[r]='\0';
	for(i=0;i<r+1;i++)
	{
	    if(a[i]!=b[i])//palindrome checking
	    {
	        f=1;
	    }
	}
    if(f==1)
    {
        printf("%s is not a Palindrome",a);
    }
    else
    {
        printf("%s is a Palindrome",a);
    }
	return 0;
}

