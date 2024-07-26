#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    //cin >> s;     //doesnt get the entire string, only word before first space
    getline(cin,s);
    cout << s;
    s.push_back('e');
    s.size();

    // reverse(s.begin(),s.end()); //O(n)
    // cout << s;

    cout << "\n" << s.substr(0,3) << "\n";
    
    string s1 = "College";
    string s2 = "Wallah";

    s1 +=  " " + s2;
    cout << s1;

    char ar1[20] = "College";
    char ar2[10] = "Wallh";
    strcat(ar1,ar2);

    
    int num = 5413;
    string str = to_string(num);
    str += "1";
    cout << str;

}