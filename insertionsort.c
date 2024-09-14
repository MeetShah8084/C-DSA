#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// The Error message is because of
// char (*p)[50] instead of char *p
// char p is pointer to pointer pointing to array of 50 char

void inssort(int arr[],int n);
void inssortt(char lol[][50],int n);

int main(){
    // int n;
    // printf("Enter the size of array : ");
    // scanf("%d",&n);
    // int *arr = (int*)calloc(sizeof(int),n);
    // printf("Enter the elements of array : \n");
    // for(int i = 0;i < n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // inssort(arr,n);
    // system("clear");
    // for(int i = 0; i < n;i++){
    //     printf("%d\n",arr[i]);
    // }
    #ifdef __linux__
    system("set -x LC_ALL en_US.ASCII;locale | grep LANG;");

    #endif
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : \n");
    for(int i = 0 ; i < n;i++){
        scanf("%d",&arr[i]);
        getchar();
    }
    // system("clr");
    inssort(arr,n);
    printf("\n");
    for(int i = 0;i < n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

void inssort(int arr[],int n){
    int i,key,j;
    for(i = 1;i < n; i++){
        key = arr[i];
        j = i-1;
        while(arr[j] > key && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}    

/*


strcmp(str1,str2)

returns 0 if equal
returns 1 if str1 is > str2
return -1 if str1 < str2

*/

void inssortt(char lol[][50],int n){
    int i = 1, j = 0;
    char key[50];
    for(i = 1;i < n;i++){
        strcpy(key,lol[i]);
        j = i-1;
         for (j = i - 1; (j >= 0) && (strcmp(lol[j],key) > 0); j--) {
            strcpy(lol[j + 1], lol[j]);
        }
        strcpy(lol[j+1],key);
    }
}