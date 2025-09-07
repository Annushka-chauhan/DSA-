#include<bits/stdc++.h>
using namespace std;
//we have been provided with row number and column number and we want to find the number at that poition 
int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

int main(){
	int r,c;
	cout<<"Enter row number"<<endl;
	cin>>r;
	cout<<"Enter column number"<<endl;
	cin>>c;
	
	int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: "
            << element ;
    return 0;
}