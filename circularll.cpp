#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
class circularLL{
    node *head;
    node *tail;
    public:
    circularLL()
    {
        head=NULL;
        tail=NULL;
    }
    void insertAtHead(int val)
    {
        node* newnode=new node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            tail->next=head;
        }
        else
        {
            newnode->next=head;
            head=newnode;
            tail->next=head;
        }

    }
    void display()
    {
        if(head==NULL)
        return;
        node*temp=head->next;
        while(temp!=head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    circularLL cll;
    cll.insertAtHead(10);
    cll.insertAtHead(20);
    cll.insertAtHead(30);
    cll.insertAtHead(40);
    cll.display();
    return 0;

}