#include <iostream>
using namespace std;

int main() {
    cout << "Day 1 started!" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// Basic input and output:
int main(){
    int x;
    cout <<"Enter your age :";
    cin>> x;
    cout <<"The age is :" << x << endl;
}

// If and else statements:
/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int grade;
    cout << "enter your grade :";
    cin >> grade;
    if (grade<25){
        cout<<"Your grade is F";
    }
    else if (grade <=44){
        cout<<"Your grade is E";
    }
    else if (grade <=49){
        cout<<"Your grade is D";
    }
    else if (grade <=59){
        cout<<"Your grade is C";
    }
    else if (grade <=79){
        cout<<"Your grade is B";
    }
    else{
        cout<<"Your grade is A";
    } 
    return 0;

}

//Nested if statements:
/*
Take the age from the user and then decide accordingly
1. If age < 18,
print-> not eligible for job
2. If age >= 18,
print-> "eligble for job"
3. If age >= 55 and age <= 57,
print-> "eligible for job, but retirement soon."
4. If age > 57
print-> "retirement time"
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "enter your age :";
    cin>> age;
    if (age< 18){
        cout<<"not eligible for job";
    }
    else if  (age < 57){
        cout<<"eligible for job";
        if (age >= 55){
            cout<<",but retirement soon.";
        }
    }
    else{
        cout<<"retirement time";
    }
}
// Switch case statements:
/*Take the day no and print the corresponding day
for.1 print .Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cout<<"Enter the days number :";
    cin>> day;  
    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid day number";
    }
}
//arrays in C++:
//1D array;

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6];
    cin >> arr[0] >> arr[1] >> arr[2] >>arr[3] >> arr[4] >> arr[5];
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5];
    return 0;

}
//2D array;
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
    cin >> arr[0][0] >> arr[0][1] >> arr[0][2];
    cin >> arr[1][0] >> arr[1][1] >> arr[1][2];
    cin >> arr[2][0] >> arr[2][1] >> arr[2][2];
    cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << endl;
    cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << endl;
    cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << endl;  
    return 0;
}
// print even numbers from 1 to 100;
#include <bits/stdc++.h>
using namespace std;
int main(){
    for (int i=2; i<=100; i+=2){
        cout << i << endl;
    }
}

