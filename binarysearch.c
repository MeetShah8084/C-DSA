#include<stdio.h>


int steps = 0;

int binarysearch(int arr[],int n,int se){
   int s = 0,e = n-1,m = s+(e-s)/2;
   while(s <= e){
      m = s+(e-s)/2;
      steps++;
      if(arr[m] == se){
         printf("Element found at position : %d\n",m+1);
         return m;
      }
      else if(arr[m] > se){
         e = m-1;
      }
      else if(arr[m] < se){
         s = m+1;
      }
   }
   return -1;
}

int main(){
   int n,se,i;
   printf("Enter the size : ");
   scanf("%d",&n);
   int arr[n];
   for(i = 0;i < n;i++){
      scanf("%d",&arr[i]);
   }
   printf("Enter the element the search for : ");
   scanf("%d",&se);
   if(binarysearch(arr,n,se) == -1){
      printf("Element not found!!!\n");
   }
   printf("\nIt took the %d steps\n",steps);
   return 0;
}

// #ifdef __linux__
//    #include<sys/resource.h>
//    struct rlimit rlim;
// #endif



// #ifdef __linux__
//    if(getrlimit(RLIMIT_STACK,&rlim) == 0){
//       printf("Current stack limit : %ld\nMax stack limit : %ld\n",rlim.rlim_cur,rlim.rlim_max);
//    }else{
//       perror("getrlimit");
//    }
// #endif


