//WE are given with N rows and M colums and have a 2D vector created from N and M ie input
//taken by the user and we have to prnt sum, max and min of each row in the array


#include<bits/stdc++.h>
using namespace std;
int main(){
	int N, M;
	cin>>N>>M;
    vector<vector<int>> res(N, vector<int>(3));
	vector<vector<int>> arr(N, vector<int>(M));
	for(int i=0;i <N ; i++){
		for(int j=0; j<M; j++){
			cin>>arr[i][j];
		}
	}
     for(int i=0; i<N; i++){
     	int sum=0;
     	int mx= INT_MIN;
     	int mn = INT_MAX;
    for(int j=0; j<M; j++){
    	sum+=arr[i][j];
    	mx=max(mx, arr[i][j]);
    	mn=min(mn, arr[i][j]);

     }
     res[i][0]= sum;
   res[i][1]=mx;
   res[i][2]=mn;
    }
   for(int i=0; i<N; i++){
   	for(int j=0; j<3; j++){
   		cout<<res[i][j]<<" ";
   	}
   	cout<<endl;
   }
}
