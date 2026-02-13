//to check if the number is armstrong or not:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0,temp;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while(num>0){
        int digit=num%10;
        sum=sum+(digit*digit*digit);
        num=num/10;
    }
    if (temp==sum){
        cout<<"The number is an armstrong number."<<endl;
    }
    else{
        cout<<"The number is not an armstrong number."<<endl;
    }
    return 0;
}