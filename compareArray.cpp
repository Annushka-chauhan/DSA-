//have 2 arrays of length N and M for each B[i] print the count of elements from A which is greater 
//than B[i]

#include<bits/stdc++.h>
using namespace std ;
int main(){
    int N, M;
   cin >> N >> M;
    vector<int> A(N), B(M);
    for(int i=0; i<N; i++){
    	cin>>A[i];
    }
    for(int i=0; i<M; i++){
    	cin>>B[i];
    }
   
    vector<int> result;
   for(int i=0; i<M; i++){
   	int cnt=0;
   	for(int j=0; j<N; j++){
   		if(A[j]>B[i]){
   			cnt++;
   		}
   	}
   	result.push_back(cnt);
   	 
   	 }
     for(int x: result){
        cout<<x<<" ";
   }

	return 0;
}

