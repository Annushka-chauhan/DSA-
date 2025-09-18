#include<bits/stdc++.h>
using namespace std;
int main(){
	//Given an array of N integers, Find first location of minimum and maximum element Split the array 
	//into 3 parts from these locations. Built another  
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int minIndex= min_element(arr.begin(), arr.end())- arr.begin();
	int maxIndex= max_element(arr.begin(), arr.end()) -arr.begin();
   vector<int> result;
   if(minIndex > maxIndex){
   	swap(minIndex, maxIndex);
   }
   for(int i=minIndex; i<maxIndex; i++){
   	result.push_back(arr[i]);
   }
   for(int i=0; i<minIndex; i++){
   	result.push_back(arr[i]);
   }
   for(int i=maxIndex; i<n; i++){
   	result.push_back(arr[i]);
   }

    for(int x: result){
    	cout<<x<<" ";
    }
	return 0;
}