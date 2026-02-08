//for normal case:
#include <bits/stdc++.h>
using namespace std;
void print1(int n){
    for (int i=0;i<=n;i+=1){
        //space print
        for (int j=0;j<=n-i-1;j+=1){
            cout<<"  ";
        }
        //star print
        for (int j=0;j<2*i-1;j+=1){
            cout<<"* ";
        }
        //space print
        for (int j=0;j<=n-i-1;j+=1){
            cout<<"  ";
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
    for (int i=0;i<=n;i+=1){
        //space print
        for (int j=0;j<=n-i-1;j+=1){
            cout<<"  ";
        }
        //star print
        for (int j=0;j<2*i-1;j+=1){
            cout<<"* ";
        }
        //space print
        for (int j=0;j<=n-i-1;j+=1){
            cout<<"  ";
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
    
}