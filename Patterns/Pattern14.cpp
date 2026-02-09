//for normal case
#include <bits/stdc++.h>
using namespace std;
void Print1(int n){
    for (int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+i;ch++){
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
//for test cases
#include <bits/stdc++.h>
using namespace std;
void Print1(int n){
    for (int i=1;i<=n;i++){
        //manipulating over the chars
        for(char ch='A';ch<='A'+i;ch++){
        cout<<ch;
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
