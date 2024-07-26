#include<iostream>
#include<set>
#include<string>
using namespace std;

//invite list of party having unique names only 
int main(){

    set<string> inviteList;
    int n;      // no of inputs
    cin>>n;

    while(n--){
        string name;
        cin>>name;

        inviteList.insert(name);
    }

    for(auto name: inviteList){
        cout<< name << " ";
    }
}