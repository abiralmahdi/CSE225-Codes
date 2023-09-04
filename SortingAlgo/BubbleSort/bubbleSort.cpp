#include <stdio.h>

// Printing the array
void printArray(int* arr, int n){
    for (int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}

// Bubble sorting the array
void bubbleSort(int *arr, int n){
    int temp = 0; // Declare a temporary variable
    for (int i=0; i<=n-1; i++){ // n-1 cause the total number of passes is n-1
        for (int j=0; j<n-1-i; j++){ // n-1-i cause the largest element has been set as the last element
            if (arr[j]>arr[j+1]){ // Checks if the element is larger than the next
                temp = arr[j];    // If true, the elements will swipe
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // Will continue until the largest element is sent at the last of the array
            }
        }
    }
}

// Main function
int main(){
    int arr[] = {3,2,5,1,7,4,2};
    int n = 7;
    printf("Before sorting\n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("After sorting\n");
    printArray(arr,n);
}
