#include <stdio.h>

void acceptArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
  {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void reverseArray(int arr[], int n)
{
    for(int i = 0, j = n-1; i < j; i++, j--)
  {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    acceptArray(arr, n);

    printf("Original array: ");
    printArray(arr, n);

    reverseArray(arr, n);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}

