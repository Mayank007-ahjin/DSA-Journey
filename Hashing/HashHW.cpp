//to find the highest/lowest frequency of a number in an array:
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Hash mapping
    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find max & min frequency
    int maxFreq = 0;
    int minFreq = INT_MAX;
    int maxElement = -1;
    int minElement = -1;

    for(auto it : freq) {
        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }

        if(it.second < minFreq) {
            minFreq = it.second;
            minElement = it.first;
        }
    }

    cout << "Highest frequency element: " << maxElement 
         << " (Frequency: " << maxFreq << ")" << endl;

    cout << "Lowest frequency element: " << minElement 
         << " (Frequency: " << minFreq << ")" << endl;

    return 0;
}