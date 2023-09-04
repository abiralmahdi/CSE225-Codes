#include <stdio.h>

void displayArray(int arr[100], int size_){
    for (int i=0; i<size_; i++){
        printf("%d  ", arr[i]);
    }
}

int insertInArray(int arr[100], int size_, int capacity, int index, int element){
    if (size_>capacity || index>=capacity){
        return -1;
    }

    for (int i=size_-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}


int main(){
    int arr[100] = {1,2,3,4,5};
    int size_ = 5;
    int index, element;

    printf("Previous array: ");
    displayArray(arr, size_);
    printf("\n");

    printf("Enter the number you want to insert:");
    scanf("%d", &element);

    printf("Enter the index:");
    scanf("%d", &index);

    insertInArray(arr, size_, 100, index, element);
    size_++;

    printf("Next array: ");
    displayArray(arr,size_);

}
