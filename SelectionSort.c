#include <stdio.h>
struct Array
{
    int *Arr;
    int size;
};

void SlectionSort(int *arr, int n)
{
    int min_index;
    int temp;
    for (int i = 0; i < n; i++)
    {
       min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
               
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
void Display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main()
{
    int A[] = {1, 5, 4,  7, 9, 3, 4};
    Display(A , 7);
    SlectionSort(A, 7);
    Display(A , 7);
    return 0;
}