//usinh unordered map
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    unordered_map<int,int> mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cout<<"Enter the number of queries:" ;
    cin>>q;
    while (q--){
        int number;
        cout<<"Enter the number to be searched: ";
        cin>>number;
        //fetch the count of number from hash
        cout<<mpp[number]<<endl;
    }
    return 0;
}
//character mapping:
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    //precompute
    unordered_map<char,int> mpp;
    for (int i=0;i<s.size();i++){
        mpp[s[i]-'a']++;
    }
    int q;
    cout<<"Enter the number of queries:";
    cin>>q;
    cout<<"Enter the characters to be searched: \n";
    for(int i=0;i<q;i++){
        char ch;
        cin>>ch;
        //fetch the count of character from hash
        cout<<mpp[ch-'a']<<endl;
    }
    return 0;
}