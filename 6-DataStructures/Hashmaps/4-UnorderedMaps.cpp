#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

//key values
//not ordered
//insertion, deletion, retrieval -> O(1), worst case is O(n) when all elements collide

int main(){

    unordered_map<int,string> record;
    // roll no, name

    record.insert({1, "Urvi"});
    record.insert(make_pair(2, "Shradha"));
    record[3] = "Bali";

    for(auto pair : record){
        cout << pair.first << " - " << pair.second <<"\n";
    }


}