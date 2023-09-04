#include<stdio.h>
int main(){
    int arr[34] = {1,15,18,25,26,28,35,43,48,55,78,79,88,89,91,92,95,99,100,101,105,111,112,118,114,144,155,188,198,241,268,299,425,431};
    int number = 0;
    int low = 0;
    int high = 33;
    printf("Enter the number you want to search: ");
    scanf("%d", &number);

    while (true){
        int mid = (low+high)/2;
        if(arr[mid]>number){
            high = mid;
        }
        else if (arr[mid]<number){
            low = mid;
        }
        else if (arr[mid]==number){
            printf("number found at index- %d",mid);
            break;
        }
    }
}
