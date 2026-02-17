//To print reverse of an array using recursion:
//using two  variable pointers:
#include <bits/stdc++.h>
using namespace std;
void Rarr(int arr[], int l, int r){
    if (l>=r) return ;
    else
    swap(arr[l],arr[r]);

    Rarr(arr, l+1,r-1);
}
int main(){
    int l,r;
    int arr[5]={2,3,4,5,6};
    Rarr(arr, 0, 4);
}
