#include <stdio.h>

#define SIZE 100

int stack[SIZE], choice, top;

void push(int x);

int pop(void);

void display(void);

int main()
{
    top = -1;

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();

    pop();
    pop();
    display();

    return 0;
}

void push(int x)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int popped_element = stack[top];
        top--;
        return popped_element;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {

        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
