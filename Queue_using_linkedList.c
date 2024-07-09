#include <stdio.h>
#include<stdlib.h>

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
        ptr= ptr->next;
      }
      printf("\n");
      
}
void Enqueue(struct Queue *q, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct  Node));
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
    struct Queue *q = malloc(sizeof(struct Queue));
    
    q->front = NULL;
    q->rear = NULL;
    Enqueue(q  , 10);
    Enqueue(q , 20);
    Display(q);
    return 0;
}