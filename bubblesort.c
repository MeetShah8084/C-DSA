#include<stdio.h>
#include<string.h>


void bubblesorti(int arr[],int n);
void bubblesorts(char arr[][50],int n);
void swap(int *a,int* b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void swaps(char s1[50],char s2[50]){
   char m[50];
   strcpy(m,s1);
   strcpy(s1,s2);
   strcpy(s2,m);
}

int main(){

   int n;
   printf("Enter the size of int: ");
   scanf("%d",&n);
   char arr[n][50];
   for(int i = 0; i < n;i++){
      scanf("%s",arr[i]);
   }
   printf("\n");
   bubblesorts(arr,n);
   for(int i = 0; i < n;i++){
      printf("%s\n",arr[i]);
   }
   return 0;
}

void bubblesorti(int arr[],int n){
   int i=0,j=0;
   char a = '0';
   while(i < n-1){
      j = 0;
      while(j < n-i-1){
         if(arr[j] > arr[j+1]){
            swap(&arr[j],&arr[j+1]);
            a = '1';
         }
         j++;
      }
      if(a == 0)  return;
      i++;
   }
}
void bubblesorts(char arr[][50],int n){
   char flag = '0';
   char temp[50];
  int i=0,j=0;
   while(i < n-1){
      j = 0;
      while(j < n-i-1){
         if(strcmp(arr[j],arr[j+1]) > 0){
            swaps(arr[j],arr[j+1]);
            flag = '1';
         }
         j++;
      }
      if(flag == 0)  return;
      i++;
   }
}
