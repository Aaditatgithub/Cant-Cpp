#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string str = "College";
    string str1("Wallah");

    string s;
    //cin>>s;         //No spaces
    //getline(cin,s);   //Spaces too 

    // Reverse a string
    reverse(str.begin(), str.end());    
    cout<<str<<endl;

    // Substring
    cout<< str.substr(0,3)<<endl;       //O(n)

    //Concat
    str += str1;
    cout<< str <<endl;

    //Concat character arrays
    
}