#include <stdio.h>
int maxElement(int *A, int n)
{
    int max = A[0];
   
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}
void CountSort(int *A, int n)
{
    int max = maxElement(A, n);
    int countArr[max + 1];
    for (int i = 0; i < max +1; i++)
    {
        countArr[i] = 0;
    }

    for (int i = 0; i < n ; i++)
    {
        countArr[A[i]] = countArr[A[i]] + 1;
    }
    int j = 0;
    
    for (int i = 0; i < max +1 ; i++)
    {

        while (countArr[i] > 0)
        {
            A[j] = i;
            j++;
            countArr[i]--;
        }
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

    int arr1[] = {1, 12, 4, 16, 7}; 
    Display(arr1, 5);
    CountSort(arr1, 5);
    Display(arr1, 5);
    return 0;
}