// pass fail marks filter you are given pass and fails status of n students
// you need to find the count of students who have a pass status and have marks>75 
//and also find the count of students who have failed status and have marks <50 

// input 
// the no. of n students 
// 5
// Pass 85
// Pass 77 
// Fail 55
// Fail 25 
// Fail 4

// op
// 2  2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pass = 0, fail = 0;

    for (int i = 0; i < n; i++) {
        string status;
        int marks;
        cin >> status >> marks;

        if (status == "Pass" && marks > 75) {
            pass++;
        }
        else if (status == "Fail" && marks < 50) {
            fail++;
        }
    }

    cout << pass << " " << fail << endl;
    return 0;
}
