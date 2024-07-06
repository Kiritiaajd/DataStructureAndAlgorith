#include<stdio.h>
#include<stdlib.h>
struct terms
{
    int coff;
    int exp;
};
struct ploy
{
    int n; 
    struct terms *terms;
};
  void CreatePolynomial(struct poly *p){
    printf("Enter the number of terms : ");
    scanf("%d"&p->n);
    p->terms=(struct terms *)malloc(p->n * sizeof(struct terms));
   printf("Enter the terms (coefficient and exponent):\n");
    for (int i = 0; i < p->n; i++)
    {
        scanf("%d %d",&p->terms[i].coff , &p->terms[i].exp);

    }
     
   }
   void Dislay(struct poly p){
    printf("\nPloynomial : \n");
    for (int i = 0; i < p.n; i++)
    {
        printf("%dx^%d",p.terms[i].coff , p.terms[i].exp);
       
        if (i < p.n - 1) {
            printf(" + ");
        }
        printf("\n");
    }
    
   }
int main(){
    struct poly p1;
    CreatePolynomial(&p1);
    Dislay(p1);
     free(p1.terms);
    return 0;
}