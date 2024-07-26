#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

// Problem 2: Anagrams
// Check whether two Strings are anagram of each other. Return true if they are else return false.
// An anagram of a string is another string that contains the same characters, only the order of characters can
// be different. For example, “abcd” and “dabc” are an anagram of each other$


bool CheckAnagrams(string &s1, string &s2){

    if(s1.length() == s2.length()){

        unordered_map<char, int> m;

        for(char c1 : s1){
            m[c1]++;
        }

        unordered_map<char, int> :: iterator itr = m.end();
        for(char c2 : s2){
            if(m.find(c2) == itr){
                return false;
            }
            else{
                m[c2]--;
            }
        }

        for(auto itr : m){
            if(itr.second != 0)
                return false;
        }
        return true;
    }
    return false;
}

int main(){

    string s1, s2;
    cin >> s1 >> s2;

    cout << (CheckAnagrams(s1,s2) ? "Yes" : "No");
}
