#include<stdio.h>




int insArray(int arr[],int capacity,int size,int index,int element);
void print(int arr[],int n);
int insert(int arr[],int n,int* size,int element);




int main(){
    int arr[5] = {15,59,64},size = 3,index = 0,cap = 5;
    print(arr,size);
    insert(arr,cap,&size,2);
    print(arr,size);
    return 0;
}





int insArray(int arr[],int capacity,int size,int index,int element){
    
    if(size >= capacity){
        return -1;
    }

    for(int i = size-1;i>= index;i--){
        arr[i+1] = arr[i];
    }
    
    arr[index] = element;
    return 0;
}

void print(int arr[],int n){
    for(int i = 0; i < n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}

int insert(int arr[],int n,int* size,int element){
    int index;
    if(*size >= n){
        return -1;
    }
    for(int i = 0;i < *size;i++){
        if(arr[i] > element){
            index = i;
            break;
        }
    }
    insArray(arr,n,*size,index,element);
    (*size)++;
    return 0;
}