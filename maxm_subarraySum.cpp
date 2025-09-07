#include<bits/stdc++.h>

using namespace std;
int maxxSum(int arr[],int n){
int res = arr[0];
int maxReading = arr[0];
for(int i=1; i<n; i++){
	maxReading = max( arr[i],maxReading+arr[i]);
    res = max(maxReading , res);
}
return res;

}
int main(){
	int n;
	cin>>n;
	int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0; i<n; i++){
    	cin>>arr[i];

    }
    cout<<"The maximum sum is"<<endl;
     cout<<maxxSum(arr,n);
}
