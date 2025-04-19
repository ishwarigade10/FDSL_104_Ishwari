#include <stdio.h>
#include <string.h>
#define MAX 10

char stack[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = c;
    }
}

char pop() {
    if (top == -1) {
        return '\0'; // Indicates stack underflow (nothing to match)
    } else {
        return stack[top--];
    }
}

int main() {
    char expr[MAX];
    int balance = 1;

    printf("Enter the expression: ");
    scanf("%s", expr);

    for (int i = 0; i < strlen(expr); i++) {
        char c = expr[i];

        if (c == '{' || c == '[' || c == '(') {
            push(c);
        } else if (c == '}' || c == ']' || c == ')') {
            char topchar = pop();
            if (topchar == '\0' ||
               (c == ')' && topchar != '(') ||
               (c == ']' && topchar != '[') ||
               (c == '}' && topchar != '{')) {
                balance = 0;
                break;
            }
        }
    }

    // Final check: if balance is 1 and stack is empty
    if (balance && top == -1) {
        printf("Balanced expression\n");
    } else {
        printf("Unbalanced expression\n");
    }

    return 0;
}
