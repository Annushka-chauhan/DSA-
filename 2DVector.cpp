// // The first line has two space separated integers N and M, denoting the number of rows
// // and columns of a matrix. Next N lines have M space-separated integers.
// // Input should be taken as a list of lists. Print all the rows in a single line.

// // Input Format

// // First line has 2 space separated integers, denoting N and M.

// // Next N lines have M space separated integers.

// // Output Format

// // N × M space separated integers in a single line.



// //SAMPLE INPUT
// //3 5
// // 12 4 7 9 2
// // 13 5 8 3 1
// // 42 4 1 6 9

// //SAMPLE OUTPUT

// //12 4 7 9 2 13 5 8 3 1 42 4 1 6 9


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int N, M;
// 	cin>>N>>M;
// 	//2D vector 
// 	vector<vector<int>> arr(N, vector<int>(M));
//     for(int i=0; i<N; i++){
//     	for(int j=0; j<N*M; j++){
//     		cin>>arr[i][j];
//     		cout<<arr[i][j]<<" ";
//     	}
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;   // Read rows and columns

    vector<vector<int>> matrix(N, vector<int>(M));

    // Input matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    // Output all elements in a single line
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
    }

    return 0;
}

