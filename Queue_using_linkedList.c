#include <stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Queue
{
    struct Node *front;
    struct Node *rear;
};
void Display(struct Queue *q){
      struct Node *ptr = q->front;
      while (ptr != NULL)
      {
        printf("%d ", ptr->data);
      }
      printf("\n");
      
}
void Enqueue(struct Queue *q, int data)
{
    struct Node *newNode = malloc(malloc(sizeof(struct Node)));
   newNode->data = data;
   newNode->next =NULL;
      if (q->rear ==NULL)
      {
          q->front = q->rear = newNode;

      }else{
            q->rear->next = newNode;
            q->rear = newNode;
      }
           
}

#include <stdlib.h>
int main()
{

    // Intializing queue to NULL
    struct Queue *q;
    q->front = NULL;
    q->rear = NULL;
    Enqueue(q  , 10);
    Enqueue(q , 20);
    Display(q);
    return 0;
}