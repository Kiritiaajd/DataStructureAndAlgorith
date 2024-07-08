#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void CreateLL(struct Node **head, int data)
{
<<<<<<< HEAD
    struct Node *newNode = malloc(sizeof(struct Node ));
=======
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
>>>>>>> e7b4f1c (Add all files and initial commit)
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
<<<<<<< HEAD
    struct Node *ptr;
    ptr=head;
    while (ptr!= NULL)
    {
        printf("%d->", ptr->data);
=======
    struct Node *ptr = head;
    
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
>>>>>>> e7b4f1c (Add all files and initial commit)
        ptr = ptr->next;
    }
    printf("NULL");
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