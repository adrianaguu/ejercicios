#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    struct node* next;

};


struct node * list (int n)
{
    struct node* head;
    head=malloc(sizeof(struct node));
    struct node* prev;
    struct node* cur;
    int i;
    head->a=1;
    prev=head;
    for (i=2;i<=n;i++)
    {
        cur=malloc(sizeof(struct node));
        cur->a=i;
        prev->next=cur;
        prev=cur;
    }
    prev->next=NULL;
    return head;
}

struct node* insertb (int x,struct node* head)
{
    struct node* temp;
    temp=malloc(sizeof(struct node));
    temp->a=x;
    temp->next=head;
    return temp;

}

struct node* inserto (struct node* head,int x)
{
    struct node* temp;
    struct node* temp1;
    struct node* nuevo;
    nuevo=malloc(sizeof(struct node));
    nuevo->a=x;
    temp = head;
    do
    {
        temp1=temp;
        temp=temp->next;
    }while (x>temp->a && temp->next!=NULL);
    temp->next=nuevo;
    nuevo->next=NULL;
    return head;
}

struct node* insertm (int x,struct node* head)
{
    struct node* temp;
    struct node* temp1;
    struct node* temp2;
    temp2=malloc(sizeof(struct node));
    temp2->a=x;
    temp=head;
    int i,n=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        n++;
    }
    temp=head;
    for (i=0;i<n/2;i++)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp2;
    temp2->next=temp;
    return head;
}

void concatenar (struct node* head1, struct node* head2)
{
    struct node* temp=head1;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
}
void print (struct node* head)
{
    struct node* temp;
    temp = head;
    while (temp!=NULL)
    {
        printf( "%d \n" , temp->a);
        temp=temp->next;
    }
}

struct node* eliminar (int val,struct node* head)
{
    struct node* prev=head;
    struct node* cur=head->next;
    if(head->a==val)
    {
            cur=head;
            head=head->next;
            free(cur);
            return head;
    }
    else
    {
        while (cur!=NULL)
        {

            if (cur->a==val)
            {
                prev->next=cur->next;
                free(cur);
                break;
            }
            prev = cur;
            cur=cur->next;

        }
        return head;
    }

}


int main()
{

    struct node * head =list (7);
    struct node * head2 =list (4);
    print(head);
    printf("\n");
    head=insertb(0,head);
    print(head);
    printf("\n");
    head=eliminar(0,head);
    print(head);
    printf("\n");
    head=inserto(head,8);
    print(head);
    printf("\n");
    head=insertm(15,head);
    print(head);
    printf("\n");

    concatenar(head,head2);
    print(head);


    return 0;
}
