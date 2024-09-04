#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

void traversal(Node* head){
    while(head->next!=NULL){
        printf("%d\n",head->next->data);
        head = head->next;
    }
}

int main(){
    Node* head,first = {10},second = {10};
    head = (Node*)malloc(sizeof(Node));
    head->next = &first;
    first.next = &second;
    second.next = NULL;
    traversal(head);
    return 0;
}