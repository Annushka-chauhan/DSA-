#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    int water_req= b-a;
	    if(b>=a){
	        if(x>=water_req){
	            cout<<"Yes"<<endl;
	        }
	        else{
	            cout<,"No"<<endl;
	        }
	    }
	    else if(b<a){
	        if(y>=water_req){
	            cout<<"Yes"<<endl;
	        }
	        else{
	            cout<<"No"<<endl;
	        }
	    }
	}

}
