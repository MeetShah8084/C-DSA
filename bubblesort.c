#include<stdio.h>
#include<string.h>


void bubblesorti(int arr[],int n);
void bubblesorts(char arr[][50],int n);
void swap(int *a,int* b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void main(){

   system("set -x LC_ALL en_US.ASCII;locale | grep LANG");
   int n;
   printf("Enter the size : ");
   scanf("%d",&n);
   char arr[n][50];
   for(int i=0;i < n;i++){
        scanf("%d",arr[i]);
        getchar();
   }
}

void bubblesorti(int arr[],int n){
   int i=0,j=0;
   while(i < n-1){
      j = 0;
      while(j < n-i-1){
         if(arr[j] > arr[j+1]){

         }
         j++;
      }
      i++;
   }
}
void bubblesorts(char arr[][50],int n){}