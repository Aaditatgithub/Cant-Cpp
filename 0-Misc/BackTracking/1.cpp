#include<iostream>
using namespace std;

// Write a program to print all permutations of the given string s in lexicographically sorted order.
// input  : PQR
// output : PQR PRQ QPR QRP RPQ RQP

void Permutation(string &s, int idx){
    //base case
    if(idx == s.size()){
        return;
    }

    for(int j = idx; j < s.size(); j++){
        swap(s[idx], s[j]);
        Permutation(s, idx+1);
        //swap(s[idx], s[i]); 
    }
}

int main(){
    string str = "abc";
    Permutation(str,0);

    //if passing by reference, additional swap required, to bring back the original string
    //if passing by value, reswapping not needed
}