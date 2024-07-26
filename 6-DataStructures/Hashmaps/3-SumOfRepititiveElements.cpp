#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){

    //taking no. of elements
    int n;
    cout << "Enter the number of elements to be inserted : ";
    cin >> n;

    int ele;
    int sum = 0;

//  map< no.,count >
    map<int,int> m;

    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < n ; i++){
       cin >> ele;
       m[ele]++;        //increment the value for key = ele;
    }

    map<int,int>:: iterator trav;
    for(trav = m.begin(); trav != m.end() ; trav++){
        if(trav->second > 1)
            sum += trav->first; 
        cout << "Number: " << trav->first << " , Count: " << trav->second << "\n"; 
    } 

    cout << "Sum of repititive elements is : " << sum << "\n";
    return 0;
}