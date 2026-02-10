//Working on Vectors in C++
#include <iostream>
#include <vector>
using namespace std;
vector<int>v;
int main(){
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"first element is: "<<v[0]<<endl;
    cout<<"second element is: "<<v[1]<<endl;
    cout<<"third element is: "<<v[2]<<endl;
    return 0;
}
//Adding a pair in veector:
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<pair<int,int>>v1;
int main(){
    //adding a pair using push_back 
    v1.push_back({1,2});
    //adding a pair using emplace_back 
    v1.emplace_back(3,4);
    v1.push_back({5,6});
    cout<<"first pair is: "<<v1[0].first<<" and "<<v1[0].second<<endl;
    cout<<"second pair is: "<<v1[1].first<<" and "<<v1[1].second<<endl;
    cout<<"third pair is: "<<v1[2].first<<" and "<<v1[2].second<<endl;
    return 0;
}