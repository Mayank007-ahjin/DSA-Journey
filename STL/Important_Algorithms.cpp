//sorting:
//skeleton:sort(a,a.n)
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {5, 2, 9, 1, 5, 6};
    // Sort in ascending order
    sort(v.begin(), v.end());
    cout << "Sorted in ascending order: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    // Sort in descending order
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted in descending order: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    //sorting a particular portion of the given dataset:
    sort(v.begin()+2,v.begin()+4); cout<<"sorted a particular portion of the given dataset: "; for (int num : v) { cout << num << " "; } cout << endl;
    return 0;
}
//sort it according to second element
// if second element is same, then sort
// it according to first element but in descending
#include <bits/stdc++.h>
#include <vector>
using namespace std;
//comparator function to sort in descending order:
bool cmp(pair<int,int> a, pair<int,int> b) {
    // Sort by second in ascending order
    if (a.second < b.second) return true;
    if (a.second > b.second) return false;

    // If second values are equal → sort first in descending order
    return a.first > b.first;
    
}
int main(){
    vector<pair<int,int>> v;

    v.push_back({1,3});
    v.push_back({2,2});
    v.push_back({5,3});
    v.push_back({4,2});

    // Using comparator here
    sort(v.begin(), v.end(), cmp);

    cout << "After Sorting:\n";
    for(auto p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
    
// to get all the permutations of a string:
//always use a sorted value of the string to get all the permutations: 
#include <bits/stdc++.h>
using namespace std;
string s="123";
int main(){
    cout<<"All permutations of the string are: "<<endl;
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    return 0; 
}
//to get the max and min element of the given dataset:
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<int>v={5,2,9,1,5,6};
    //to get the maximum element of the vector v:   
    int maxElement=*max_element(v.begin(),v.end());
    cout<<"maximum element of the vector v is: "<<maxElement<<endl;
    //to get the minimum element of the vector v:
    int minElement=*min_element(v.begin(),v.end());
    cout<<"minimum element of the vector v is: "<<minElement<<endl; 
    return 0;
}
//using builtin_popcut func:(O(1) time complexity)
//basic
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
      int n;
    cout << "Enter a number: ";
    cin >> n;

    int setBits = __builtin_popcount(n);

    cout << "Number of set bits: " << setBits << endl;

    return 0;
}
//for long long int:
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << __builtin_popcountll(n);

    return 0;
}
