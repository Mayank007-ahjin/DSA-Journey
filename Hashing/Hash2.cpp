//character hashing
//for lowercase characters only
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    //precompute
    int hash[26] = {0};
    for (int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter the number of queries:";
    cin>>q;
    cout<<"Enter the characters to be searched: \n";
    for(int i=0;i<q;i++){
        char ch;
        cin>>ch;
        //fetch the count of character from hash
        cout<<hash[ch-'a']<<endl;
    }
    return 0;
}
//for both the cases of characters;
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    //precompute
    int hash[256] = {0};
    for (int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cout<<"Enter the number of queries:";
    cin>>q;
    cout<<"Enter the characters to be searched: \n";
    for(int i=0;i<q;i++){
        char ch;
        cin>>ch;
        //fetch the count of character from hash
        cout<<hash[ch]<<endl;
    }
    return 0;
}