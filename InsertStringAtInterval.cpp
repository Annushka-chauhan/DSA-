//You are given two strings s1 and s2 and a number n insert s2 in s1 after every n characters 
//print the modified string 
//ip 
//1st line cantains string s1 
//quick fox
// #
// 2
//qu#ic#k #fo#x

#include<bits/stdc++.h>
using namespace std;
int main(){

	string s1, s2;
	getline(cin, s1);

	cin>>s2;
	int n;
	cin>>n;
	string result= "";
	for(int i=0; i<s1.length(); i++){
		result+=s1[i];
		if((i+1)%n ==0 && (i+1)<s1.length()){
			result+=s2;
		}
	}
	
	cout<<result;
	return 0;
}