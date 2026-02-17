//sum of N numbers using recursion:
//parametric wise:
//TC and SC=O(n)
#include <bits/stdc++.h>
using namespace std;
int sum1( int i,int sum){
    if (i<1){
        cout<<sum<<endl;
        return 0;
    }
    sum1(i-1,sum+i);

}
int main(){
    int i;
    cin>>i;
    sum1(i,0);
    return 0;

}
//funtional wise(return the output): 
//TC and SC=O(n)
#include <bits/stdc++.h>
using namespace std;
int sum1(int n){
    if (n==0)
    return 0 ;
    else
    return  n + sum1(n-1);
    
}
int main(){
    int n;
    cin>>n;
    cout<<sum1(n);
    return 0;

}
//to print the factorial of N:
//TC and SC=O(n)
#include <bits/stdc++.h>
using namespace std;
int fact1(int n){
    if (n>1)
    return  n * fact1(n-1);
    
}
int main(){
    int n;
    cin>>n;
    cout<<fact1(n);
    return 0;

}
                  //or
#include <bits/stdc++.h>
using namespace std;
int fact1(int n){
    if (n==0) return 1;
    else
    return  n * fact1(n-1);
    
}
int main(){
    int n;
    cin>>n;
    cout<<fact1(n);
    return 0;
} 

 
