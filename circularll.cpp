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
    void deleteAthead()
    {
        node*temp=head;
        if(head==NULL)
        {
            return ;
        }
        else if(head==tail)
        {
            delete head;
            head=tail=NULL;
        }
        else
        {
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }
    void deleteattail()
    {
        node*temp=tail;
        node* prev=head;
        if(head==NULL)
        {
            return;
        }
        else if(head==tail)
        {
            delete head;
            head=tail=NULL;
        }
        else{
        while(prev->next!=temp)
        {
            prev=prev->next;
        }
        tail=prev;
        tail->next=head;
        delete temp;
      }
    }
    void display()
    {
        if(head==NULL)
        return;
        cout<<head->data;
        node*temp=head->next;
        while(temp!=head)
        {
            cout<<" "<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
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
    cll.deleteAthead();
     cll.display();
     cll.deleteattail();
     cll.display();
    return 0;

}