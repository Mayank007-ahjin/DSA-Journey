#include <bits/stdc++.h>
using namespace std;
//Pairs:
int main() {
	pair<int,int>p={1,2};
	cout<<"first value is: "<<p.first<<" and second is: "<<p.second<<endl;
	return 0;
}
//for characters:
#include <bits/stdc++.h>
using namespace std;
int main() {
    pair<char,char>p={'a','b'};
    cout<<"first value is: "<<p.first<<" and second is: "<<p.second<<endl;
    return 0;
}
//for three values:
#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,pair<int,int>>p1={1,{2,3}};
    cout<<"first value is: "<<p1.first<<" and second is: "<<p1.second.first<<" and third is: "<<p1.second.second<<endl;
    return 0;
}
//for pair in array;
#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<"for first pair"<<"first value is: "<<arr[0].first<<" and second is: "<<arr[0].second<<endl;
    cout<<"for second pair"<<"first value is: "<<arr[1].first<<" and second is: "<<arr[1].second<<endl;
    cout<<"for third pair"<<"first value is: "<<arr[2].first<<" and second is: "<<    arr[2].second<<endl;
    return 0;
}