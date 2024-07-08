#include<stdio.h>
void Display(int *A , int n){
      for (int i = 0; i < n; i++)
      {
        printf("%d ", A[i]);
      }
      
}
void Swap(int *a , int *b){
        int temp;
        temp = *a; 
        *a = *b;
        *b= temp;
}
 void InsertionSort(int *A, int n) {
    int key , j ; 
    for (int i = 0; i <= n-1; i++)
    {      key = A[i];
             j = i-1;
        while (A[j] > key && j >=0)
        {
           A[j+1]= A[j];
              j--;
        }
        
        A[j+1] = key;
    }
    
 }

int main(){
    int A[] = {1, 45 ,67 ,43, 45, 76 };
    int n = 6;
    Display(A , n);
    InsertionSort(A , n);
    printf("\n");
     Display(A , n);

}