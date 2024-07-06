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
<<<<<<< HEAD
int main()
{
    struct Node *head;
    CreateLL(&head, 10);
    CreateLL(&head, 20);
    CreateLL(&head, 30);
    Display(head);

=======
void addfirst(struct Node ** head, int data){
    struct Node *newNode = malloc(sizeof(struct Node));
       newNode->data= data;
       newNode->next=*head;
       *head = newNode;
}
  void addNode(struct Node **head , int data , int pos){
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
     struct Node *ptr = *head;
         if (*head == NULL || pos ==0)
         {
           *head = newNode;
           return;
         }
            if (pos < 0)
            {
                printf("Invalid position");
            }
            
         for (int i = 0; i < pos-2 && ptr->next != NULL; i++)    
         {
            ptr=ptr->next;
         }

         newNode->next=ptr->next;
         ptr->next=newNode;
        
         
  }
  void DeleteNode(struct Node **head , int pos){
    struct Node *ptr = *head;
    if (pos <  0)
    {
       printf("Invalid position");
       return;
    }
    for (int i = 0; i < pos-2 && ptr->next !=NULL; i++)
    {
        ptr= ptr->next;
    }
    

  }
int sumElement(struct Node *head){
    int sum = 0;
     struct Node *ptr = head;
     while (ptr !=NULL)
     {
        sum = sum+ptr->data;
        ptr=ptr->next;
     }
     
    return sum;
}
int main()
{
    struct Node *head=NULL;
  CreateLL(&head, 20);
    CreateLL(&head, 30);
    CreateLL(&head, 40);

    addfirst(&head,10);
    printf("Actual list : \n");
    Display(head);
    printf("\n");
    addfirst(&head , 01);
    printf("\nList after addding first Element\n");
    Display(head);
    printf("\nAdding node at pos 3\n");
    addNode(&head , 11 , 3);
    Display(head);
     printf("\nSum of Elements of list = %d",sumElement(head));
>>>>>>> e7b4f1c (Add all files and initial commit)
    return 0;
}    