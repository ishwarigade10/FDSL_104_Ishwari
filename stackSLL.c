#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top,*newnode,*temp;
void push()
{
    newnode=malloc(sizeof(struct node));
    printf("enter data for newnode");
    scanf("%d",&newnode->data);
    if(top==NULL)
    {
    top=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=top;
        top=newnode;
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("stack is empty");
        return;
    }
    else
    {
        temp=top;
        top=top->next;
        printf("the poped element is %d",temp->data);
        free(temp);
    }
}
void display()
{
    temp=top;
    if(temp==NULL)
    {
        printf("stack is empty");
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}
int main()
{
int ch;
top=NULL;
while(1){
printf("\nOperation to perform:\n1)push\n2)pop\n3)Display\n4)Exit\n");
scanf("%d",&ch);

switch (ch)
{
case 1:
push();
break;

case 2:
pop();
break;

case 3:
display();
break;

case 4:
printf("Exit");
return 0;

default:
printf("Invalid choice\n");
break;
}}
return 0;
}