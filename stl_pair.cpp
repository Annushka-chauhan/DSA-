#include<bits/stdc++.h>
using namespace std;
int main(){
	// integral values stored in pair
	pair<int,int>pr1= {2,8};
	cout<<pr1.first<<" "<<pr1.second;

    cout<<endl;

	// pair can be of character and integer as well or both the same
	 pair<int,char>pr2 = make_pair(2,'b');   //make pair is another way of declaring a pair
	cout<<pr2.first<<" "<<pr2.second;

	cout<<endl;

	// nested pair
	pair<pair<int,int>,int>pr3 = {{5,7}, 90};
	cout<<pr3.first.first<<" "<<pr3.first.second<<" "<<pr3.second;
}