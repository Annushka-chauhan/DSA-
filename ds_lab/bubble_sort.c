#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n],i,j;

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);

    }
    for(i=0; i<n; i++){
        for(j=i; j<i; j++){
            int temp= arr[j];
               arr[j]=arr[i];
               arr[i]=temp;

        }
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}