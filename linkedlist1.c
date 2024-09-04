#include<stdio.h>
#include<stdlib.h>



typedef struct node{
    int data;
    struct node* next;
}Node;



void traversal(Node* head);
void insertion(Node* head,Node* insNext,Node* insert);




int main(){
    Node* head = NULL,first = {10},second = {10};
    head = (Node*)malloc(sizeof(Node));
    head->data = 10;
    head->next = &first;
    first.next = &second;
    second.next = NULL;
    traversal(head);
    insertion(head,&second,first.next);
    traversal(head);
    free(head);
    return 0;
}



void traversal(Node* head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head = head->next;
    }
    printf("\n");
}


void insertion(Node* head,Node* insNext,Node* insert){
    Node* temp;
    while(head!= NULL){
        if(head->next == insNext){
            insert->next = insNext->next;
            head->next = insert;
            break;
        }
        head = head->next;
    }
}
