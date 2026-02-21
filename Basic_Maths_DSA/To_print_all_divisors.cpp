//to shown all the divisors of a number
//METHOD 1: O(n) time complexity
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The divisors of "<<n<<" are: ";
    for (int i=1;i<=n;i++){
        if (n%i==0){
            cout<<i<<" ";
        }
        
    }
    return 0;
}
//METHOD 2: O(sqrt(n)) time complexity
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> divisors;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The divisors of "<<n<<" are: ";
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0){
            divisors.push_back(i);
            if (n/i!=i){
                divisors.push_back(n/i);
            }
        }
        
    }
    sort(divisors.begin(),divisors.end());
    for (auto it : divisors){
        cout<<it<<" ";
    }
    return 0;
}