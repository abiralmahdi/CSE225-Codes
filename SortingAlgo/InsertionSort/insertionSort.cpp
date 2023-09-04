#include<stdio.h>

// Printing the array
void printArray(int* arr, int n){
    for (int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}

// insertion Sorting the array
void insertionSort(int*arr, int n){
    int temp = 0; // Temporary variable
    for (int i=1; i<=n-1; i++){ // n-1 cause the total number of passes is n-1
        for (int j=i-1; j>=0; j--){ // j=i-1 and j>=0 cause the second loop will start from the element previous to j and will continue till it reaches the first element
            if (arr[j+1]<arr[j]){ // Checks if the selected element is smaller than its previous element
                temp = arr[j]; // Interchanges their positions
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {3,5,2,1,7,4,9};
    int n = 7;
    printf("Before sorting\n");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("After sorting\n");
    printArray(arr,n);
}
