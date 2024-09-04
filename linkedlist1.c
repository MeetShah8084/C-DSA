#include<stdio.h>
#include<stdlib.h>



typedef struct node{
    int data;
    struct node* next;
}Node;



void traversal(Node* head);




int main(){
    Node* head = NULL,first = {10},second = {10};
    head = (Node*)malloc(sizeof(Node));
    head->data = 10;
    head->next = &first;
    first.next = &second;
    second.next = NULL;
    traversal(head);
    free(head);
    return 0;
}



void traversal(Node* head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head = head->next;
    }
}