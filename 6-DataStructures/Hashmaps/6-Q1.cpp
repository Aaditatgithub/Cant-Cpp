#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Problem 1: Can you make the strings equal?
// Given an array of strings. You can move any number of characters from one string to any other string any
// number of times. You just have to make all of them equal.
// Print “Yes” if you can make every string in the array equal by using any number of operations otherwise print
// “No”.

bool EqualPossibleCheck(vector<string> &v){     //O(N) -> N: total number of characters in all strings
                                                //Space Comp : number of unique characters in strings
    int numberOfStrings = v.size();
    unordered_map<char,int> m;

    for(string str : v){
        for(char c : str){
            m[c]++;
        }
    }

    unordered_map<char,int> :: iterator itr;
    for(itr = m.begin(); itr != m.end(); itr++){
        if((itr->second)%numberOfStrings != 0){
            return false;
        }  
    }
    return true;
}

int main(){

    int n;
    cout << "Enter the number of strings : ";
    cin >> n;

    vector<string> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << (EqualPossibleCheck(v)? "yes" : "no") << "\n";

}