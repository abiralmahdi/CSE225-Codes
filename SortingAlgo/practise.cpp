#include<stdio.h>

// Printing the array
void printArray(int* arr, int n){
    for (int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}
// insertion Sorting the array

void sorted(int*arr, int n){
    int temp = 0;
    for (int i=1; i<=n-1; i++){
        for (int j=i-1; j>=0; j--){
            if (arr[j+1]<arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {3,5,2,1,7,4,2};
    int n = 7;
    printf("Before sorting\n");
    printArray(arr, n);
    sorted(arr, n);
    printf("After sorting\n");
    printArray(arr,n);
}
