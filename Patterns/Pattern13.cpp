//for normal case
#include <bits/stdc++.h>
using namespace std;
void Print1(int n){
    int num=1;
    for (int i=1;i<=n;i++){
        for ( int j=1;j<=i;j++){
            cout<<num;
            num+=1;

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
//for Test case
#include <bits/stdc++.h>
using namespace std;
void Print1(int n){
    int num=1;
    for (int i=1;i<=n;i++){
        for ( int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;

        }
        cout<<endl;
        
    }
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i < t;i++){
        int n;
        cin>>n;
        Print1(n);
    }
    return 0;
}
