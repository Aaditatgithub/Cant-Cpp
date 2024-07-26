#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){

    int n;  cin >> n;
    set<int> s;
    vector<int> v(n);
    int c;

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    while((n+1)){
        s.insert(v[n]);
        n--;
    }    

    set<int> :: iterator itr;
    itr = s.begin();
    itr++;
    cout << "Second smallest integer is : " << *itr ;
}