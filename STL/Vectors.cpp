//Working on Vectors in C++
#include <iostream>
#include <vector>
using namespace std;
vector<int>v;
int main(){
    //adding elements in vector using push_back function:
    v.push_back(1);
    //adding elements in vector using emplace_back function:
    v.emplace_back(2);
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
    //adding a pair using emplace_back (no curly braces needed)
    v1.emplace_back(3,4);
    v1.push_back({5,6});
    cout<<"first pair is: "<<v1[0].first<<" and "<<v1[0].second<<endl;
    cout<<"second pair is: "<<v1[1].first<<" and "<<v1[1].second<<endl;
    cout<<"third pair is: "<<v1[2].first<<" and "<<v1[2].second<<endl;
    return 0;
} 

#include <bits/stdc++.h>
#include <vector>
using namespace std;   
vector<int>v2(5);
int main(){
    for (auto it:v2){
        cout<<it<<" ";
    }
    return 0;
}
//copying a vector on another vector:
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>v3(5,10);
vector<int>v4(v3);
int main(){
    cout<<"elements of vector v3 are: ";
    for (auto it:v3){
        cout<<it<<" ";
    }    cout<<endl;
    cout<<"elements of vector v4 are: ";
    for (auto it:v4){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
//access the elemnets of vector using indexing 
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>v5(5,10);
int main(){
    //by using indexing:
    cout<<"First element of vector v5 is: "<<v5[0]<<endl
         <<"Second element of vector v5 is: "<<v5[1]<<endl
         <<"Third element of vector v5 is: "<<v5[2]<<endl
         <<"Fourth element of vector v5 is: "<<v5[3]<<endl
         <<"Fifth element of vector v5 is: "<<v5[4]<<endl;
    return 0;
}
//iterating a vector using for loop:
//printing the all the elemnts of the vector v6:
#include <bits/stdc++.h>  
#include <vector>
using namespace std;
vector<int>v6(5);    
int main(){
    v6.emplace_back(1);
    v6.emplace_back(2);
    v6.emplace_back(3); 
    v6.emplace_back(10);
    v6.emplace_back(7);
    //1)longer way:
    cout<<"elements of vector v6 are: ";
    for (auto it=v6.begin();it!=v6.end();it++){
        cout<<*it<<" ";
    }
    //2)shorter way:
    cout<<"\nelements of vector v6 are: ";
    for(auto it:v6){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
//function on vectors:
//to erase any element from the vector:
//for single element erasing:
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>v7(5,100);
int main(){
    cout<<"elements of vector v7 are: ";
    for (auto it:v7){
        cout<<it<<" ";
    }
    cout<<endl;
    //erasing the third element of the vector v7:
    v7.erase(v7.begin()+2);
    cout<<"elements of vector v7 after erasing the third element are: ";
    for (auto it:v7){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
//for multiple element erasing:
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>v8(5,100);
int main(){
    cout<<"elements of vector v7 are: ";
    for (auto it:v8){
        cout<<it<<" ";
    }
    cout<<endl;
    //erasing the third element of the vector v7:
    v8.erase(v8.begin()+2,v8.begin()+4);
    cout<<"elements of vector v8 after erasing the third element are: ";
    for (auto it:v8){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
//to insert any element in the vector:
//adding a single element in the vector:
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>v9(5,100);
int main(){
    cout<<"elements of vector v9 are: ";
    for (auto it:v9){
        cout<<it<<" ";
    }
    cout<<endl;
    //inserting an element at the beginning of the vector v9:
    v9.insert(v9.begin(),200);
    cout<<"elements of vector v9 after inserting 200 at the beginning are:";
    for (auto it:v9){
        cout<<it<<" ";
    }
    cout<<endl;
    //inserting multiple element at the beginning of the vector v9:
    v9.insert(v9.begin(),2,300);
    cout<<"elements of vector v9 after inserting 300 two times at the beginning are: ";
    for (auto it:v9){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
//to get the size of the vector:
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
vector<int>v10(5,100);
int main(){
    cout<<"size of vector v10 is: "<<v10.size()<<endl;
    return 0;
}
//using pop_back:
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
vector<int>v11(5,100);
int main(){
    cout<<"elements of vector v11 are: ";
    for (auto it:v11){
        cout<<it<<" ";
    }
    cout<<endl;
    //removing the last element of the vector v11:
    v11.pop_back();
    cout<<"elements of vector v11 after removing the last element are: ";
    for (auto it:v11){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
//erase the vecror using clear function:
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>v12(5,100);
int main(){
    cout<<"elements of vector v12 are: ";
    for (auto it:v12){
        cout<<it<<" ";
    }
    cout<<endl;
    //erasing the vector v12:
    v12.clear();
    cout<<"size of vector v12 after erasing is: "<<v12.size()<<endl;
    //to check whether the vector is empty or not:
    cout<<"is vector v12 empty?(1=True and 0=False) "<<v12.empty()<<endl;
    return 0;
    
}
//using swaop function to swap two vectors:
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>v13(5,100);
vector<int>v14(5,200);
int main(){
    cout<<"elements of vector v13 are: ";
    for (auto it:v13){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"elements of vector v14 are: ";
    for (auto it:v14){
        cout<<it<<" ";
    }
    cout<<endl;
    //swapping the vectors v13 and v14:
    v13.swap(v14);
    cout<<"elements of vector v13 after swapping are: ";
    for (auto it:v13){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"elements of vector v14 after swapping are: ";
    for (auto it:v14){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}