#include <stdio.h>

#define MAX 5

int a[MAX], top = -1;  // Global stack and top variable

void push(int element) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    printf("Enter element : " );
    scanf("%d", &element);

    a[top] = element;
    printf("The element Pushed at %d position: %d\n",top, a[top]);
}
void isEmpty()
{
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
}
void pop() {
    
    if (top == -1) {
        printf("Stack is underflow\n");
        return;
    }
    
    printf("The element poped at %d position: %d\n",top, a[top]);
    top--;
}
void display()
{ isEmpty();
    {
    for(int i=top;i>=0;i--)
    {
        printf("The element Pushed at %d position: %d\n",i, a[i]);
    }
}
}
int main() {
    int ch, element;
    while(1)
    {
    printf("1.push(element)\n2.pop()\n3.display\n4.exit\n");
    printf("enter your choice");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1: 
        push(element);
        break;
        case 2: 
        pop();
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
