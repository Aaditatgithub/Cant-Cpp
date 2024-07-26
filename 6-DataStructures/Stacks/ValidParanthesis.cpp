#include<iostream>
#include<string>
#include<stack>
using namespace std;


int main(){
    string paran {"{}{[]}"};

    stack<char> st;

    for(char &ch : paran){
        if(ch == '{' || ch == '[' || ch == '(')
            st.push(ch);
        else{
            if((ch == '}' && st.top() == '{') || (ch == ')' && st.top() == '(') || (ch == ']' && st.top() == '['))
                st.pop();
            else{
                cout << "Not balanced";
                exit(0);
            }
        }
    }
    if(!st.empty())
        cout << "Not balanced";
    else
        cout << "Balanced";
}