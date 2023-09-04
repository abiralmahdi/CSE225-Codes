#include<stdio.h>

int deleteElement(int arr[], int size, int index){
    for (int i=index; i<size; i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = '\0';
}


void displayArray(int arr[100], int size_){
    for (int i=0; i<size_; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index;
    printf("Enter the index of the element you want to delete: ");
    scanf("%d", &index);

    displayArray(arr, size);

    deleteElement(arr, size, index);
    size--;
    displayArray(arr, size);
}
