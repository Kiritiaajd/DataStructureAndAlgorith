#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void CreateLL(struct Node **head, int data)
{

    struct Node *newNode = malloc(sizeof(struct Node ));

    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *ptr = *head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
}
void Display(struct Node *head)
{

    struct Node *ptr;
    ptr=head;
    while (ptr!= NULL)
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
    struct Node *head;
    CreateLL(&head, 10);
    CreateLL(&head, 20);
    CreateLL(&head, 30);
    Display(head);

    return 0;
}    