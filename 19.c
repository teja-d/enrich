#include <stdio.h>
#include<string.h>
void swap(char c[],char d[])
{
    char temp[10];
    strcpy(temp,c);
    strcpy(c,d);
    strcpy(d,temp);
}
void sort(char b[][10],int m)
{   
    int i,j,k;
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(strlen(b[i])>strlen(b[j]))
            {
                swap(b[i],b[j]);
            }
            else if(strlen(b[i])==strlen(b[j]))
            {
                for(k=0;k<strlen(b[i]);k++)
                {
                    if(b[i][k]>b[j][k])
                    {
                        swap(b[i],b[j]);
                        break;
                    }
                    else if(b[i][k]<b[j][k])
                    {
                        break;
                    }
                }
            }
        }
    }
}
void main()
{
    int i,n;
    char a[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
}
