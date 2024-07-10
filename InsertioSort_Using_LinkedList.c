#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

    
void AddLast(struct Node **head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    struct Node *ptr = *head;
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}
void Display(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}


int main()
{
    struct Node *head = NULL;
    AddLast(&head, 10);
    AddLast(&head, 30);
    AddLast(&head, 50);
    AddLast(&head, 40);
    AddLast(&head, 20);
    Display(head);
    return 0;
}