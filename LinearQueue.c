#include<stdio.h>
#define Max 5
int queue[Max];
int rear=-1,front=-1;
void enqueue(int element)
{
    if(rear==Max-1&&front!=rear)
    {
        printf("queue full");
        
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
        printf("enter element");
        scanf("%d",&element);
        rear+=1;
            queue[rear]=element;
            printf("the element enqueue at %d position is%d\n",rear,queue[rear]);
    }
    else{
        printf("enter element");
    scanf("%d",&element);
    rear+=1;
        queue[rear]=element;
        printf("the element enqueue at %d position is%d\n",rear,queue[rear]);
    }
}
void dequeue()
{
    if(front==rear)
    {
        printf("queue is empty");
        front=-1;
        rear=-1;
    }
    else{
        front+=1;
      printf("the dequeued element is %d\n",queue[front]);
    }

}

void display(int element)
{
    
   
   if(rear==-1&&front==-1)
   {
    printf("queue is empty");
   
   }
   else if(front==rear)
   {
    printf("queue is empty");
   }
   else{
    for(int i=front+1;i<=rear;i++)
    {
    printf("the element present at %d position is %d\n",i,queue[i]);
    }
}
}
int main()
{while(1)
    {
    int element,ch;
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    printf("enter your choice\n");
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
        display(element);
        
        break;
        case 4:
        printf("Exiting the program\n");
        return 0;
        default:
        printf("invalid choice");
    }
    
}
   return 0; 
}
