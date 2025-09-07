#include<stdio.h>
int insertion_sort(int arr[], int n){
	for( int i=0; i<=n-1; i++){
        	 int j=i;
        	while(j>0 && arr[j-1]>arr[j]){
        		int temp = arr[j-1];
        		arr[j-1]=arr[j];
        		arr[j]=temp;
        	}
        }
        return arr;
}
int main(){
	int n;
	printf("Enter the value of array element ");
	scanf("%d", &n);
	int arr[n], i, j;
	printf("Enter the array ");
	for(i =0; i<n; i++){
		scanf("%d ",&arr[i]);
        }
        insertion_sort(arr,n);
        
        for(int i=0; i<n; i++){
        	printf("The sorted array is %d",arr[i]);

        }
}