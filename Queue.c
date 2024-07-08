#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
struct Queue *CreateQueue(int size)
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = size;
    q->front = -1;
    q->rear = -1;
    q->arr = (int *)malloc(size * sizeof(int));
    return q;
}
int IsFull(struct Queue *q)
{
    return q->rear == q->size - 1;
}
int IsEmpty(struct Queue *q)
{
    return q->rear == q->front;
}
void Display(struct Queue *q)
{
    if (IsEmpty(q))
    {
        printf("Empty Queue");
    }

    for (int i = q->front + 1; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}
void EnQuene(struct Queue *q, int val)
{
    if (IsFull(q))
    {
        printf("\nQueue OverFLow\n");
    }
    else
    {
        q->rear = q->rear + 1;
        q->arr[q->rear] = val;
    }
}
int main()
{
    struct Queue *q;
    q = CreateQueue(10);
    Display(q);
    EnQuene(q, 10);
    EnQuene(q, 20);
    EnQuene(q, 30);
    EnQuene(q, 40);
    EnQuene(q, 10);
    EnQuene(q, 20);
    EnQuene(q, 30);
    EnQuene(q, 40);
    EnQuene(q, 10);
    EnQuene(q, 20);
    Display(q);
    EnQuene(q, 30);
    EnQuene(q, 40);

    return 0;
}