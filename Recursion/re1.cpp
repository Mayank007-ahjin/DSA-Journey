//print name 5 times:
#include <bits/stdc++.h>
using namespace std;
void Print1(int n, int i=1){
    if (i>n) return;
    cout<<"Hello World!"<<endl;
    Print1(n, i+1);
}
int main(){
    int n;
    cout<<"Enter the number of times you want to print: ";
    cin>>n;
    Print1(n);
    return 0;
}
//print linearly from 1 to n:
#include <bits/stdc++.h>
using namespace std;
void Print1(int n, int i=1){
    if (i>n) return;
    cout<<i<<endl;
    Print1(n, i+1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Print1(n);
    return 0;
}
//print linearly from n to 1:
#include <bits/stdc++.h>
using namespace std;
void Print1(int n, int i){
    if (i<1) return;
    cout<<i<<endl;
    Print1(n, i-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Print1(n, n);
    return 0;
}