#include <stdio.h>
void InsertionSort(int *A, int n)
{
    int key;

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        key = A[i];
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
void Display(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int Arr[] = {10, 34, 43, 12, 1, 3, 6, 8, 9};
    int n = 9;
    Display(Arr, n);
    InsertionSort(Arr, n);
    Display(Arr, n);
    return 0;
    
}