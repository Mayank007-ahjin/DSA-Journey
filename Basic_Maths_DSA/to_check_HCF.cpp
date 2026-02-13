//to check the HCF of two numbers:
//METHOD 1: O(min(a,b)) time complexity
#include <bits/stdc++.h>    
using namespace std;
int main(){
    int a,b,hcf;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for (int i=1;i<=min(a,b);i++){
        if (a%i==0 && b%i==0){
            hcf=i;
        }
    }
    cout<<"The HCF of "<<a<<" and "<<b<<" is: "<<hcf<<endl;
    return 0;
}
//METHOD 2(Euclideon algo): O(log(min(a,b))) time complexity
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    while (a>0 && b>0){
        if (a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if (a==0){
        cout<<"The HCF of the two numbers is: "<<b<<endl;
    }
    else{
        cout<<"The HCF of the two numbers is: "<<a<<endl;
    }
    return 0;
}
