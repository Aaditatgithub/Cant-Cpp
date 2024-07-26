#include<stack>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    stack<int> st,temp;
    st.emplace(12);
    st.emplace(54);
    st.emplace(37);
    st.emplace(65);
    st.emplace(86);

    int n = st.size()/2;
    while(n--){
        temp.emplace(st.top());
        st.pop();
    }
    cout << st.top() << endl;
    st.pop();

    for(int i = 0; i < st.size()/2; i++){
        st.push(temp.top());
        temp.pop();
    }
}