#include<stdio.h>
#include<stdlib.h>



typedef struct node{
    int data;
    struct node* next;
}Node;



void traversal(Node* head);
void inseraftnode(Node* head,Node* insNext,Node* insert);
void insertion(Node* head,Node* insert,int pos);



int main(){
    Node* head = NULL,first = {110},second = {102},third ={1002};
    head = (Node*)malloc(sizeof(Node));
    head->data = 10;
    head->next = &first;
    first.next = &second;
    second.next = NULL;
    traversal(head);
    inseraftnode(head,&second,&third);
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


void inseraftnode(Node* head,Node* insNext,Node* insert){
    
    if(head == NULL){
        head->next = insert;
    }
    insert->next = insNext->next;
    insNext->next = insert;
}


void insertion(Node* head,Node* insert,int pos){
    if(head == NULL){
        insert->next = NULL;
        head = insert;
    }
    int i = 1;
    while(i<=pos){
        head = head->next;
        i++;
    }
    insert->next = head;
    head->next = insert;
}
