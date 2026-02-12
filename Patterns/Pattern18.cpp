//for normal case
#include <bits/stdc++.h>
using namespace std;
void Print1(int n){
    for (int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
        cout<<ch;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Print1(n);
    return 0;
}
//for test case:
#include <bits/stdc++.h>
using namespace std;
void Print1(int n){
    for (int i=0;i<=n;i++){
        for(char ch='E';ch>'E'-i;ch--){
        cout<<ch;
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        Print1(n);


    }
    return 0;
    
}
