#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute 
    int hash[100] = {0};
    for (int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int q;
    cout<<"Enter the number of queries: \n";
    cin>>q;
    cout<<"Enter the numbers to be searched: \n";
    for(int i=0;i<q;i++){
        int number;
        cin>>number;
        //fetch the count of number from hash
        cout<<hash[number]<<endl;
    }
    return 0;
}