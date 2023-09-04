#include<stdio.h>

// Printing the array
void printArray(int* arr, int n){
    for (int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}
// insertion Sorting the array
void selectionSort(int*arr, int n){
    int min_ = arr[0]; // temporary variable to store the minimum element
    for (int i=0; i<n; i++){ // Loops till the end of the array
        for (int j=i+1; j<n; j++){ // Starts from the value of i till the end of the array
            if (arr[i]>arr[j]){ // Checks if the i'th element is greater j'th element
                min_ = arr[i];  // swaps the element if true
                arr[i] = arr[j];
                arr[j] = min_;
            }
        }
    }
}
int main(){
    int arr[] = {3,5,2,1,7,4,9};
    int n = 7;
    printf("Before sorting\n");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("After sorting\n");
    printArray(arr,n);
}
