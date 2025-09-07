#include<stdio.h>
void main(){ 
  int n;
    scanf("%d",&n);
    int arr[n],i,j;

    for(i=0; i<=n-2; i++){
        scanf("%d", &arr[i]);
    }
    int mini =i;
    for(j=i; i<=n-1; i++){
        if(arr[mini]>arr[j]){
            int temp= arr[i];
               arr[i]=arr[i-1];
               arr[i-1]=temp;
        }

        
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
