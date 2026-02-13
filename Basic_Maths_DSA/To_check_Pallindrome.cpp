//to check the pallindrome number:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,revN=0,temp;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while(num>0){
        int digit=num%10;
        revN=revN*10+digit;
        
        num=num/10;
    }
    if (temp==revN){
        cout<<"The number is a pallindrome."<<endl;
    }
    else{
        cout<<"The number is not a pallindrome."<<endl;
    }
    
    return 0;
}