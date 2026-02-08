//for normal case:
#include <bits/stdc++.h>
using namespace std;
void print1(int n){
    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=n-i+1;j+=1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print1(n);
    return 0;
}

//for test case:
#include <bits/stdc++.h>    
using namespace std;
void print1(int n){
    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=n-i+1;j+=1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i+=1){
        int n;
        cin>>n;
        print1(n);
    }
    return 0;
}