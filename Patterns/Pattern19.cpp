//for normal case:
#include <bits/stdc++.h>
using namespace std;
void Print1(int n) {
    int iniS = 0;

    for (int i = 0; i < n; i++) {

        // stars
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < iniS; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        iniS += 2;
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        Print1(n);
    }

    return 0;
}