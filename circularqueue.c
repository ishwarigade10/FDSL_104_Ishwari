#include<stdio.h>
#define max 5
int queue[max];
int rear=-1;
int front=-1;
void enqueue(int element)
{
    printf("enter the element");
        scanf("%d",&element);
    if(rear==-1&&front==-1)
    {
        rear=0;
        front=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("queue full");
    }else
    {
        rear=(rear+1)%max;
        queue[rear]=element;

    }
}
void dequeue()
{
    if(rear==-1&&front==-1)
    {
        printf("queue is empty");
    }
    else if(rear==front)
    {
        printf("the deleted element is %d",queue[front]);
        rear=-1;
        front=-1;

    }
    else
    {
        printf("the deleted element is %d",queue[front]);
        front=(front+1)%max;
    }
}
void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue contents:\n");
        int i = front;
        while (1) {
            printf("%d\n", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % max;
        }
    }
}
int main()
{
    while(1)
    {
    int element,ch;
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        enqueue(element);
        
        break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
        break;
        case 4:
        printf("exit");
        return 0;
        default:
        printf("invalid choice");
    }
}
return 0;
}
