#include<stdio.h>
#include<stdlib.h>

typedef struct ll{
    int n,front,rear,*arr;
}queue;


void insert(queue* r,int element);
int del(queue* r);





int main(){
    queue* rm;
    printf("Enter the size of queue : ");
    scanf("%d",&rm->n);
    
    return 0;
}






void insert(queue* r,int element){
    if(r->rear == r->n-1){
        printf("\n\nQueue Overflow\n\n");
        return;
    }

    if(r->front == -1)
        r->front++;

    else if(r->front > r->rear){
        r->front=-1;
        r->rear=-1;
    }
    r->rear++;
    r->arr[r->rear] = element;
    return;
}



int del(queue* r){
    
}