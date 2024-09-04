#include<stdio.h>
#include<string.h>

void radixsort(int arr[],int n){
    int t,i=0;
    t = arr[0];
    while(i < n){
        if(arr[i] > t){
            t = arr[i];
        }
        i++;
    }
    printf("The largest is %d\n",t);
    
}

void main(int argc,char** argv){
    char pass[] = "MeetShah8084";
    if(argc > 1){
        if(strcmp(argv[1],pass) != 0){
            return;
        }
    }
    else{
        printf("Enter password in argument\n");
        return;
    }
    int arr[5] = {1,5,2,100,5};
    int n = 5;
    radixsort(arr,n);
    printf("%d\n",argc);
}