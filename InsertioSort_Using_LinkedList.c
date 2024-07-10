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

void InsertionSort(struct Node **head)
{
    struct Node *sorted = NULL;
    struct Node *current = *head;
    while (current != NULL)
    {
        struct Node *next = current->next;
        struct Node *ptr;
        if (sorted == NULL || sorted->data >= current->data)
        {
            current->next = sorted;
            sorted = current;
        }
        else
        {
            ptr = sorted;
            while (ptr->next != NULL && ptr->next->data < current->data)
            {
                ptr = ptr->next;
            }
            current->next = ptr->next;
            ptr->next = current;
        }
        current = next;
    }
    *head = sorted;
}

int main()
{
    struct Node *head = NULL;
    AddLast(&head, 10);
    AddLast(&head, 30);
    AddLast(&head, 50);
    AddLast(&head, 40);
    AddLast(&head, 20);

    printf("Original Linked List: ");
    Display(head);

    InsertionSort(&head);

    printf("Sorted Linked List: ");
    Display(head);

    return 0;
}
