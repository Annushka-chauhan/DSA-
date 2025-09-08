#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; 
    for (int t = 0; t < n; t++) {
        int m;
        string type;
        cin >> m >> type;

        if (type == "INT") {
            int sum = 0;

            for (int i = 0; i < m; i++) {
                int x;
                cin >> x;
                sum += x;
            }
            cout << sum << endl;
        }
        else if (type == "STRING") {
            int maxLen = 0;
            for (int i = 0; i < m; i++) {
                string word;
                cin >> word;
                if ((int)word.length()> maxLen) {
                    maxLen = word.length();
                }
            }
            cout << maxLen << endl;
            

        }
    }
 
 
    return 0;
}