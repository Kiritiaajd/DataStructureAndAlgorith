#include <stdio.h>
#include <stdlib.h>
int top = -1;
struct NODE
{
    int data;
    int *top = NULL;
    struct Node *next;
};
int top = -1;
void addfirst(struct Node **head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        newNode = *head;
    }
    newNode->next = *head;
    *head = newNode;
}
bool isEmpty(struct Node *head)
{
    if (head->top == -1)
    {
        return True;
    }
}
void push(struct Node **head, int data)
{
    addfirst(*head, data);
    head->top++;
}
void Display(struct Node *head)
{

    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);

        struct Node *ptr = head;

        while (ptr != NULL)
        {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL");
    }
}
int main()
{
    struct Node *head = NULL;
    push(&head , 10);
     push(&head , 10);
      push(&head , 10);
      Display(head);

    return 0;
}