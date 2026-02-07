#include <iostream>
using namespace std;

int main() {
    cout << "Day 2 started!" << endl;
    return 0;
}
/*Task 1:Take the size of an array from the user.
Then take the array elements and print the entire array.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i+=1){
        cin>>arr[i];
    }
    cout<<"The elements of the array are :";
    for(int i=0;i<n;i+=1){
        cout<<arr[i]<<" ";
    }
}
/*Task 2:Take the size and elements of an array from the user.
Print the square of each element*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i+=1){
        cin>>arr[i];
    }
    cout<<"The elements of the array are :";
    for(int i=0;i<n;i+=1){
        cout<<(arr[i]*arr[i])<<" ";
    }
}
/*Task 3:In one program:
Take array input
Print the original array
Print the squared array*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i+=1){
        cin>>arr[i];
    }
    cout<<"The Original array:";
    for(int i=0;i<n;i+=1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The squared Array:";
    for(int i=0;i<n;i+=1){
        cout<<(arr[i]*arr[i])<<" ";
    }
}
/*Task4:Take 9 elements from the user for a 3×3 matrix and print it in matrix format.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter the elements of the matrix :";
    for(int i=0;i<3;i+=1){
        for(int j=0;j<3;j+=1){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is :";
    cout<<endl;
    for(int i=0;i<3;i+=1){
        for(int j=0;j<3;j+=1){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*Task5:Take a 3×3 matrix as input and print the sum of all elements.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=0,j=0;
    int arr[3][3];
    cout<<"Enter the elements of the matrix :";
    for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            cin>>arr[i][j];
        }
    }
     for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = 0;
    for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            sum += arr[i][j];
        }
    }
    cout<<"The sum of all elements in the matrix is :"<<sum;
}
/*Task 6:Take a 3×3 matrix and print its main diagonal elements.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=0,j=0;
    int arr[3][3];
    cout<<"Enter the elements of the matrix :";
    for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            cin>>arr[i][j];
        }
    }
     for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<"The diagonal elements are :";
    for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            if(i==j){
                cout<<arr[i][j]<<" ";
            }       
        }
    }
}
/*Task 7:Take an array as input and print the largest element.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    cout<<endl;
    for(int i=0;i<n;i+=1){
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i=1;i<n;i+=1){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"The largest element in the array is :"<<largest;
}

/*Task 8:Take an array as input and count how many elements are even.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    cout<<endl;
    for(int i=0;i<n;i+=1){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<n;i+=1){
        if(arr[i]%2==0){
            count += 1;
        }
    }
    cout<<"The number of even elements in the array is :"<<count;
}
/*Task 9:Take a 3×3 matrix and print the sum of each row.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=0,j=0;
    int arr[3][3];
    cout<<"Enter the elements of the matrix :";
    for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is :\n";
     for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The sum of each row is :\n";
    for (i=0;i<3;i+=1){
        int sum = 0;
        for (j=0;j<3;j+=1){
            sum += arr[i][j];
        }
        cout<<" row "<<i<<" sum is:"<<sum<<endl;
    }
}
/*Task 10:Take a 3×3 matrix and print the sum of each column.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=0,j=0;
    int arr[3][3];
    cout<<"Enter the elements of the matrix :";
    for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is :\n";
     for (i=0;i<3;i+=1){
        for (j=0;j<3;j+=1){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The sum of each column is :\n";
    for (j=0;j<3;j+=1){
        int sum = 0;
        for (i=0;i<3;i+=1){
            sum += arr[i][j];
        }
        cout<<" column "<<j<<" sum is:"<<sum<<endl;
    }
}
/*Take input from the user:
Name
Year of study
Print a sentence in this format:*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int year;
    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter your year of study :";
    cin>>year;
    cout<<"My name is "<<name<<" and I am in year "<<year<<" of my study.";
}
