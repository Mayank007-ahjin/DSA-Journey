//To print reverse of an array using  void recursion:
//using two  variable pointers:
#include <bits/stdc++.h>
using namespace std;

void Rarr(int arr[], int l, int r) {
if (l >= r) return;   // base case
swap(arr[l], arr[r]); // swap elements
Rarr(arr, l + 1, r - 1); // recursive call
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout << "Reversed array: ";
    Rarr(arr, 0, n - 1);  // reverse array
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//using one variable pointer:
#include <bits/stdc++.h>    
using namespace std;
void Rarr(int arr[], int i, int n) {
if (i >= n / 2) return;   // base case
swap(arr[i], arr[n - 1 - i]); // swap elements
Rarr(arr, i + 1, n); // recursive call
}  
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout << "Reversed array: ";
    Rarr(arr, 0, n);  // reverse array
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//check if the string is palindrome or not:
//functional wise(return the output):
//ex:MADAM,MARKRAM,LEVEL etc
//TC and SC=O(n/2)
#include <bits/stdc++.h>
using namespace std;
void Palindrome(string s, int i, int n){
    if (i>=n/2) {
        cout<<"The string is palindrome."<<endl;
        return;
    }
    if (s[i]!=s[n-1-i]){
        cout<<"The string is not palindrome."<<endl;
        return;
    }
    Palindrome(s, i+1, n);
}
int main() {
    string s;
    cout << "Enter the string: ";
    cin>>s;
    int n = s.length();
    Palindrome(s, 0, n);
    return 0;
}
