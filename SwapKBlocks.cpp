//an array of N integer (given) and a positive integer K  Swap every K element with the next
//k elements, N is multiple of 2K use two nested loops 
//Input format :
//First Line = 2 integers N and K 
//second line has N space separated integers 
//output 
//N space separated integers in an single line 


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Process blocks of size 2K
    for (int i = 0; i < N; i += 2*K) {
        // Swap first K with next K inside this block
        for (int j = 0; j < K; j++) {
            swap(arr[i + j], arr[i + K + j]);
        }
    }

    // Print result
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

