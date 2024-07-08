#include<stdio.h>
void BubbleSort(int *A , int n){
    int temp;
    for (int i = 0; i <n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
               if (A[j] > A[j+1])
               {
                temp = A[j];
                 A[j] = A[j+1];
                 A[j+1] = temp;
               }
               
        }
        
    }
    
}
void Display(int *A , int n){
      for (int i = 0; i < n; i++)
      {
        printf("%d ", A[i]);
      }
      
}
int main(){
    int A[] = {1, 23 , 12, 89 , 45 ,67, 23};
    Display(A , 7);
    BubbleSort(A , 7);
    printf("\n");
     Display(A , 7);
    

}