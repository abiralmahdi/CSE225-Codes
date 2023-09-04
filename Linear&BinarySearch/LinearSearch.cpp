#include<stdio.h>
int main(){
    int arr[40] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
    int number = 0;
    printf("Enter the number you want to search: ");
    scanf("%d",&number);
    for (int i=0; i<40; i++){
        if (arr[i] == number){
            printf("%d found at index-%d",number, i);
            break;
        }
    }
}
