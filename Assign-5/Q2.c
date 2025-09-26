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
    printf("Array elements are: ");
    for(int i = 0; i < n; i++)
 {
        printf("%d ", arr[i]);
   
 }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    acceptArray(arr, n);
    printArray(arr, n);

    return 0;
}

