#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void swap(int *a , int *b){
  int temp;
  temp = *a; 
  *a  =*b ;
  *b = temp;


}
void CreateLL(struct Node **head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
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
    struct Node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
struct Node * mergetwoList(struct Node* head1 , struct Node* head2){
           if (head1 ==NULL)return head2;
           if(head2 ==NULL)return head1;
           struct Node *result = NULL;
           if (head1->data <= head2->data)
           {
            result=head1;
            result->next = mergetwoList(head1->next , head2);

           }else
           {
            result = head2;
            result->next = mergetwoList(head1 , head2->next);
           }
           
            
           return result;
           
            
}
void sortingLL(struct Node *head){
    
    struct Node *ptr = NULL;
    struct Node *cptr = NULL;
    ptr= head;
    cptr=head->next;
    while (ptr !=NULL)
    {
         cptr = ptr->next;
        while (cptr!=NULL)
        {
            if (ptr->data > cptr->data)
            {
                swap(&(ptr->data) , &(cptr->data));
            }
             cptr = cptr->next;
        }
          ptr = ptr->next;
    }
    
}
int main() {
    struct Node *head = NULL;
    CreateLL(&head, 1);
    CreateLL(&head, 2);
    CreateLL(&head, 3);
    CreateLL(&head, 4);
    CreateLL(&head, 5);
    printf("List 1: ");
    Display(head);

    struct Node *head2 = NULL;
    CreateLL(&head2, 7);
    CreateLL(&head2, 5);
    CreateLL(&head2, 4);
    CreateLL(&head2, 8);
    CreateLL(&head2, 9);
    printf("List 2: ");
    Display(head2);

    head = mergetwoList(head, head2);
    printf("Merged List: ");
    Display(head);
     
     printf("\nSorted List in ascending order : \n");
     sortingLL(head);
     Display(head);
    return 0;
}
