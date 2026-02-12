//Sets(Stores in sorted manner and does not allow duplicates)
//sets run in O(log n) time complexity for insertion, deletion and searching operations.
//to insert elements in the set:
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    cout<<"elements of set 's' are: ";
    for (auto it:s){
        cout<<it<<" ";
    }
    cout<<std::endl;
    return 0;
}
//To find the size of the set:
#include <bits/stdc++.h>
#include <set>
using namespace std;
set<int>s1;
int main(){
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    cout<<"size of set 's1' is: "<<s1.size()<<endl;
    return 0;
}
//to check whether the set is empty or not:
#include <bits/stdc++.h>    
#include <set>
using namespace std;
set<int>s2;
int main(){
    cout<<"is set 's2' empty?(1=True and 0=False) "<<s2.empty()<<endl;
    return 0;
}
//to find the element in the set:
#include <bits/stdc++.h>
#include <set>
using namespace std;
set<int>s3;
int main(){
    s3.insert(1);
    s3.insert(2);
    s3.insert(3);
    s3.insert(4);
    s3.insert(5);
    int element=5;
    if (s3.find(element)!=s3.end()){
        cout<<"element "<<element<<" is present in the set 's3'"<<endl;
    }
    else{
        cout<<"element "<<element<<" is not present in the set 's3'"<<endl;
    }
    return 0;
}
//to erase an element from the set:
#include <bits/stdc++.h>
#include <set>
using namespace std;
set<int>s4;
int main(){
    s4.insert(1);
    s4.insert(2);
    s4.insert(3);
    s4.insert(4);
    s4.insert(5);
    cout<<"elements of set 's4' before erasing are: ";
    for (auto it:s4){
        cout<<it<<" ";
    }
    cout<<endl;
    //erasing the element 3 from the set 's4':
    s4.erase(3);
    cout<<"elements of set 's4' after erasing are: ";
    for (auto it:s4){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
//to erase the set using clear function:    '
#include <bits/stdc++.h>
#include <set>
using namespace std;
set<int>s5;
int main(){
    s5.insert(1);
    s5.insert(2);
    s5.insert(3);
    s5.insert(4);
    s5.insert(5);
    cout<<"elements of set 's5' before erasing are: ";
    for (auto it:s5){
        cout<<it<<" ";
    }
    cout<<endl;
    //erasing the set 's5':
    s5.clear();
    cout<<"size of set 's5' after erasing is: "<<s5.size()<<endl;
    return 0;
}   
//to check the number of occurence of the number:
#include <bits/stdc++.h>        
#include <set>
using namespace std;
set<int>s6;
int main(){
    s6.insert(1);
    s6.insert(2);
    s6.insert(3);
    s6.insert(4);
    s6.insert(5);
    cout<<"elements of set 's6' are: ";
    int cnt=s6.count(3);
    cout<<"count of element 3 in set 's6' is: "<<cnt<<endl; 
    return 0;
}
//Multiset(Stores in sorted manner and allows duplicates)
//to insert elements in the multiset:   
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(5);
    ms.insert(6);
    ms.insert(7);
    cout<<"elements of multiset 'ms' are: ";
    for (auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    //count occurence of element 5 in the multiset 'ms':
    int cnt=ms.count(5);
    cout<<"count of element 5 in multiset 'ms' is: "<<cnt<<endl;
    //single element erased:
    ms.erase(ms.find(5)); 
    cout<<"elements of multiset 'ms' after erasing one element 5 are: ";
    for (auto it:ms){ cout<<it<<" "; } cout<<endl;

    return 0;
}   

//unordered set(Stores in unsorted manner and does not allow duplicates) 
//to insert elements in the unordered set: 
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main(){ unordered_set<int>us; 
us.insert(1); 
us.insert(2); 
us.insert(3); 
us.insert(4); 
us.insert(5); 
cout<<"elements of unordered set 'us' are: "; 
for (auto it:us){ cout<<it<<" "; } 
cout<<endl; 
return 0; 
}
//Time complexity of unordered set is O(1) for insertion, deletion and searching operations.
