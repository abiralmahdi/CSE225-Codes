#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data = 12;
    struct Node* nextNode;
};
void traverse(struct Node* node){
    while (node!=NULL){
        printf("The data is %d\n", node->data);
        node = node->nextNode;
    }
}
int main(){
    struct Node * head = (struct Node*)malloc(sizeof(struct Node));
    struct Node * second = (struct Node*)malloc(sizeof(struct Node));
    struct Node * third = (struct Node*)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->nextNode = second;

    second->data = 12;
    second->nextNode = third;

    third->data = 123;
    third->nextNode = fourth;

    fourth->nextNode = NULL;
    fourth->data = 1234;

    traverse(head);
}
