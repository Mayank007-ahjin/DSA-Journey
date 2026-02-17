//to print the finbonacci series using recursion:
//using multiple recursiion call;

#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if (n<=1) return n;
    int last=fib(n-1);
    int slast=fib(n-2);
    return last+slast;
}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci series: ";
    for (int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;

}

//using single recursion call:
#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if (n<=1) return n;
    else
    return fib(n-1)+fib(n+2);
}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci series: ";
    for (int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}