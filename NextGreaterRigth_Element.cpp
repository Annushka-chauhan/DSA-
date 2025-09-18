//Given an array of N integers For each element print the first greater element towards rigth of the 
//element if no greater eleemnt is found print 0
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;                      
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<int> ans;               
    for (int i = 0; i < n; i++) {
        int nextGreater = 0;        
        for (int j = i + 1; j < n; j++) {
            if (A[j] > A[i]) {      
                nextGreater = A[j];
                break;
            }
        }
        ans.push_back(nextGreater);
    }

    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
