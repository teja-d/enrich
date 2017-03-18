#include <stdio.h>
#include<stdlib.h>
typedef struct list
{
    int val;
    struct list *next;
}a;
a* insert(a* head,int value)
{
    a *temp,*t1=(a*)malloc(sizeof(a));
    temp=head;
    if(head==NULL)
    {
        head=(a*)malloc(sizeof(a));
        head->val=value;
        head->next=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        t1->val=value;
        temp->next=t1;
        t1->next=NULL;
    }
    return head;
}
int search(a* head,int value)
{
    int i=0;
    a *temp;
    temp=head;
 
        while(temp!=NULL)
        {
            if(temp->val==value)
            {
                if(temp->next!=NULL)
                {
                    return temp->next->val;
                }
                else
                {
                    return -1;
                }
            }
            else
            {
                temp=temp->next;
                i++;
            }
        }
        return -1;
   
}
void main()
{
    a *head=NULL;
    int value,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        head=insert(head,value);
    }
    scanf("%d",&value);
    printf("%d",search(head,value));
}
