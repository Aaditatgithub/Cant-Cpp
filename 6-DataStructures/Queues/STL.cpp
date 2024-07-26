#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;
    q.push(12);
    q.push(11);
    q.push(1676);
    q.push(187);
    q.pop();
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}