#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
    cin >> t; 
    
    for (int i = 0; i < t; i++) {
        int n; 
        cin >> n; 
        
        vector<int> marks(n);
        int sum = 0;
       
        
        for (int j = 0; j < n; j++) { 
            cin >> marks[j];
            sum += marks[j];
        }

        cout<<"Sum of the array is "<<sum;
}