#include<stdio.h>

int recursion(int number){
    if (number == 1){
        return number;
    }else{
        return number*recursion(number-1);
    }

}

int main(){
    printf("%d", recursion(3));

}
