//Extracting digits from a number:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    //converting number to string to find the length of the number
    int len=to_string(a).length();
    for (int i=0;i<len;i++){
        int digit=a%10;
        cout<<digit<<endl;
        a=a/10;
    }
}
//count number of digits in a number:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int count=0;
    while(a>0){
        count++;
        a=a/10;
    }
    cout<<"The number of digits is: "<<count<<endl;
    return 0;
}
//reverse of a number:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,revN=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0){
        int digit=num%10;
        revN=revN*10+digit;
        
        num=num/10;
    }
    cout<<"The reversed number is: "<<revN<<endl;
    return 0;
}