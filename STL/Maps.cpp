//Maps(stores unique keys in sorted order)
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="one";
    m[2]="two";
    m[3]="three";
    m[4]="four";
    m[5]="five";
    cout<<"elements of map 'm' are: "<<endl;
    for (auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}  
/*we cam also add pair:
map<int,<pair<string,string>>>m2;
    or 
mop<pair<int,int>,string>m2;*/

//inserting pair of values:;
#include <bits/stdc++.h>
using namespace std;
int main(){ map<int,string>m1;
    m1.insert({1,"one"});
    m1.insert({2,"two"});
    //using emplace function to insert pair of values:
    //no '{}' needed in emplace function
    m1.emplace(3,"three");
    m1.insert({4,"four"}); 
    m1.insert({5,"five"}); 
    cout<<"elements of map 'm1' are: "<<endl; 
    for (auto it:m1)
    { cout<<it.first<<" "<<it.second<<endl; }
    //to access a value
    cout<<"value of key 3 is:"<<m1[3]<<endl;
    return 0; 
}
//Multimap(Stores in sorted manner and allows duplicate keys):
#include <bits/stdc++.h>
using namespace std;
int main(){
multimap<int,string>mm;
mm.insert({1,"one"});
mm.insert({2,"two"}); 
mm.insert({3,"three"}); 
mm.insert({4,"four"}); 
mm.insert({5,"five"});
cout<<"elements of multimap 'mm' are: "<<endl; 
    for (auto it:mm){ 
        cout<<it.first<<" "<<it.second<<endl; }
//to access a value
cout<<"value of key 3 is:"<<mm.find(3)->second<<endl;
    return 0;
}