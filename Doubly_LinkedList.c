#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void createLL(struct Node **head, int data)
{
    struct Node *newNode = NULL;
    newNode = malloc(sizeof(struct Node));
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = data;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *ptr = NULL;
    ptr = *head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->prev = ptr;
}
// The add last funtion and the Createll function both are same function we can create or add node in
// linked list
void addlast(struct Node **head, int data)
{
    struct Node *newNode = NULL;
    newNode = malloc(sizeof(struct Node));
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    struct Node *ptr = NULL;
    ptr = *head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->prev = ptr;
}
void DeleteFirstNode(struct Node **head)
{
    struct Node *first = NULL;
    first = *head;
    *head = first->next;
    if (*head != NULL)
    {
        (*head)->prev = NULL;
    }

    free(first);
}
void DeleteNode(struct Node **head, int pos)
{
    if (head == NULL)
    {
        printf("Invalid List");
        return;
    }
    struct Node *fast = NULL;
    struct Node *slow = NULL;
    slow = *head;
    fast = slow->next->next;
    for (int i = 0; i < pos - 2; i++)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = fast;
    fast->prev = slow;
}
void Display(struct Node *head)
{
    struct Node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}
void addFirst(struct Node **head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    struct Node *ptr = NULL;
    ptr = *head;
    ptr->prev = newNode;
    newNode->next = ptr;
    *head = newNode;
}
void Reverse(struct Node **head)
{
    if (*head == NULL)
    {
        return; // Empty list, nothing to reverse
    }

    struct Node *current = *head;
    struct Node *temp = NULL;

    while (current != NULL)
    {

        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        current = current->prev;
    }

    if (temp != NULL)
    {
        *head = temp->prev;
    }
}
void addatPosition(struct Node **head, int data, int pos)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (pos <= 1 || *head == NULL)
    { 
        newNode->next = *head;
        if (*head != NULL)
        {
            (*head)->prev = newNode;
        }
        *head = newNode;
        return;
    }

    struct Node *ptr = *head;
    for (int i = 1; i < pos - 1 && ptr != NULL; i++)
    { 
        ptr = ptr->next;
    }

    if (ptr == NULL || ptr->next == NULL)
    { 
        newNode->prev = ptr;
        if (ptr != NULL)
        {
            ptr->next = newNode;
        }
        return;
    }

    newNode->prev = ptr;
    newNode->next = ptr->next; 
    ptr->next->prev = newNode; 
    ptr->next = newNode;
}
int main()
{
    struct Node *head = NULL;
    createLL(&head, 10);
    addlast(&head, 20);
    addlast(&head, 30);
    addlast(&head, 40);
    addlast(&head, 50);
    addlast(&head, 60);
    Display(head);

    DeleteFirstNode(&head);
    printf("\n");
    Display(head);

    addFirst(&head, 10);
    printf("\n");
    Display(head);

    DeleteNode(&head, 3);
    printf("\n");
    Display(head);

    addatPosition(&head, 30, 3);
    printf("\n");
    Display(head);

    Reverse(&head);
    printf("\n");
    Display(head);
    return 0;
}