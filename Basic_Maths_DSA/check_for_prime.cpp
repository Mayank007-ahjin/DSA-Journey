//to check whether a number is prime or not:
//METHOD 1: O(n) time complexity
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            count++;
        }
    }
    if (count==2){
        cout<<"The number is prime."<<endl;
    }
    else{
        cout<<"The number is not prime."<<endl;
    }
    return 0;
}
//METHOD 2: O(sqrt(n)) time complexity
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1;i*i<=n;i++){
        if (n%i==0){
            count++;
            if (n/i!=i){
                count++;
            }       
            
        }
    }
    if (count==2 ){
        cout<<"The number is prime."<<endl;
    }
    else{
        cout<<"The number is not prime."<<endl;
    }
    return 0;
}