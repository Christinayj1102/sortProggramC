#include <stdio.h>
void bubbleSort(int arr[],  int n);

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array\n");
    for(int i = 0; i < n; i ++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
