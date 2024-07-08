#include <stdio.h>
#include<stdlib.h>
struct Element
{
    int i;
    int j;
    int k;
};
struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *ele;
};

void CreateSparse(struct Sparse *s){
    printf("Enter Dimensions : \n");
    scanf("%d %d",&s->m , & s->n);
    printf("Number od non-zero Elements : \n");
    scanf("%d",&s->num);
    s->ele = (struct Element *)malloc(s->num*sizeof(struct Element));
     printf("Enter the Non - zero Elements : ");
     for (int i = 0; i < s->num; i++)
     {
        scanf("%d %d %d",&s->ele[i].i , &s->ele[i].j , &s->ele[i].x);
     }
     
}
void Display(struct Sparse s){
    int i,j,k=0;
    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
            if (i==s.ele[k].i && j==s.ele[k].j) 
            {
                 printf("%d " , s.ele[i].x);
            }else{
                printf("0 ");
            }
            
        }
        printf("\n");
    }
    
}
int main()
{
    struct Sparse s;
CreateSparse(&s);
Display(s);
    return 0;
}