#include<stdio.h>
#include<stdlib.h>
int i,pos,count=1;
struct node{
    int data ;
    struct node *next;
};
struct node *head,*newnode,*temp,*prevnode;
void insertAtFirst()
{
    newnode=malloc(sizeof(struct node));
    printf("enter data for newnode");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void insertAtLast()
{
    newnode=malloc(sizeof(struct node));
    printf("enter data for newnode\n");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
        
    }
}
void insertAfterPos()                                      //start of insert after position function
{
    
    printf("enter  the position after which you want to insert");
    scanf("%d",&pos);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(pos<1||pos>count)
    {
        printf("invalid choice");

    }
    else
    {
        newnode=malloc(sizeof(struct node));
        printf("enter a data for newnode");
        scanf("%d",&newnode->data);
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void insertatpos()
{int i=1,count=1;
    printf("enter the pos");
    scanf("%d",&pos);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(pos<1||pos>count)
    {
        printf("invalid choice");
        return;
    }
    else{
    if(pos == 1)
    {
insertAtFirst();
    }
    else
    {
        temp = head;
        newnode=malloc(sizeof(struct node));
        printf("enter a data for newnode");
        scanf("%d",&newnode->data);
        while(i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

}
void deleteFirst()
{
    if(head==NULL)
    {
        printf("linked list empty");
        return;
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}
void deleteLast()
{
    if(head==NULL)
    {
        printf("liinked list empty");
        return;
    }
else
{
    temp=head;
    while(temp->next!=NULL)
    {
        prevnode=temp;
        temp=temp->next;
    }
    if(head==temp)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        prevnode->next=NULL;
        free(temp);
    }

}    
}
void deleteAtPos()
{ count=1;
    printf("enter the position that you want to delete");
    scanf("%d",&pos);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(pos<1||pos>count)
    {
        printf("invalid position");
        return;
    }
    else if(pos==1)
    {
       deleteFirst();
    }
    else if(pos==count)
    {
        deleteLast();
    }
    else
    {i=1;
        temp=head;
        while(i<pos)
        {
            prevnode=temp;
            temp=temp->next;
            i++;
        }
        prevnode->next=temp->next;
        free(temp);
    }
}
void display()
{
    temp=head;
    if(temp==NULL)
    {
        printf("sll is empty");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
printf("NULL\n");
}
int main()
{
    head=NULL;
    prevnode=NULL;
    int ch;
    while(1)
    {
        printf("\n1.insertfirst\n2.insert at last\n3.insert after position\n4.insert at position\n5.delete first\n6.delete last\n7delete at position\n8.display\n9.exit\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insertAtFirst();
            break;
            case 2:
            insertAtLast();
            break;
            case 3:
            insertAfterPos();
            break;
            case 4:
            insertatpos();
            break;
            case 5:
            deleteFirst();
            break;
            case 6:
            deleteLast();
            break;
            case 7:
            deleteAtPos();
            break;
            case 8:
            display();
            break;
            case 9:
            printf("exiting the program");
            return 0;
            default:
            printf("invalid choice");
            break;
        }
    }
    return 0;
}