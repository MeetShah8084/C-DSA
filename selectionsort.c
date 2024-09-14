#include<stdio.h>
#include<string.h>

void selectionsorti(int arr[],int n);
void swap(int *a,int* b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main(){
    int n;
    printf("Size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    selectionsorti(arr,n);
    printf("\n");
    for(int i = 0;i < n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

void selectionsorti(int arr[],int n){
    int min,key=0,i=0,j;
    while(i < n){
        key = i;
        j = i+1;
        min = arr[i];
        while(j < n){
            if(min > arr[j]){
               min = arr[j];
               key = j;
            }
            j++;
        }
        swap(&arr[i],&arr[key]);
        i++;
    }
}