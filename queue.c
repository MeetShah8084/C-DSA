#include<stdio.h>
#include<stdlib.h>

typedef struct ll{
    int n,front,rear,*arr;
}queue;



void enqueue(queue* r,int element);
void dequeue(queue* r);
void display(queue* r);






int main(){
    queue* rm;
    int temp;
    short int m;
    rm = (queue*)malloc(sizeof(queue));
    printf("Enter the size of queue : ");
    scanf("%d",&rm->n);
    rm->arr = (int*)calloc(sizeof(int),rm->n);
    rm->front = -1;
    rm->rear=-1;
    while(1){
        printf("\n\nEnter choice:\n\n1]Insert\n2]Delete\n3]Display\n\n");
        scanf("%hi",&m);
        switch(m){
            case 1:
            printf("Enter number : ");
            scanf("%i",&temp);
            printf("\n\n");
            enqueue(rm,temp);
            break;
            case 2:
            dequeue(rm);
            break;
            case 3:
            display(rm);
            break;
            default:
            free(rm);
            return -1;
        }
    }
    return 0;
}






void enqueue(queue* r,int element){
    if(r->rear == r->n-1){
        printf("\n\nQueue Overflow\n\n");
        return;
    }

    if(r->front == -1){
        r->front++;
        printf("Set front!!!\n\n");
    }
    else if(r->front > r->rear){
        r->front=-1;
        r->rear=-1;
        printf("\n\nResetting queue\n\n");
    }
    r->rear++;
    r->arr[r->rear] = element;
    return;
}



void dequeue(queue* r){
    
    if(r->front > r->rear){
        r->front = -1;
        r->rear = -1;
        printf("\n\nQueue Underflow\n\n");
        return;
    }
    else if(r->rear == -1){
        printf("\n\nQueue Underflow\n\n");
        return;
    }
    r->arr[r->front] = 0;
    r->front++;
}


void display(queue* r){
    for(int i = r->front;i <= r->rear;i++){
        printf("%d",r->arr[i]);
    }
}
