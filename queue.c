#include <stdio.h>

#define SIZE 100

void enqueue(int n);
int dequeue();
void show();

int inp_arr[SIZE];
int Rear = -1;
int Front = -1;

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    show();
    dequeue();
    dequeue();
    show();
    return 0;
}

void enqueue(int n)
{
    if (Rear == SIZE - 1)
    {
        printf("Queue is full\n");
        return;
    }
    if (Front == -1)
    {
        Front = 0;
    }
    Rear++;
    inp_arr[Rear] = n;
}

int dequeue()
{
    int data;
    if (Front == -1)
    {
        printf("Queue is empty\n");
        return -1;
    }
    data = inp_arr[Front];
    inp_arr[Front] = 0;
    if (Front == Rear)
    {
        Front = -1;
        Rear = -1;
    }
    else
    {
        Front++;
    }
    return data;
}

void show()
{
    if (Front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    for (int i = Front; i <= Rear; i++)
    {
        printf("%d ", inp_arr[i]);
    }
    printf("\n");
}
