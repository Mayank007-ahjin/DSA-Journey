//for normal case:
#include <bits/stdc++.h>
using namespace std;
void Print1(int n) {
    int iniS = 0;

    for (int i = 0; i <= n; i++) {

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
    int iniS2= 2 * n - 2;
    for (int i = 1; i <= n; i++) {

        // stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j <= iniS2; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <=i; j++) {
            cout << "*";
        }

        iniS2 -= 2;
        cout << endl;
    }

}
int main(){
    int n;
    cin>>n;
    Print1(n);
    return 0;
}
