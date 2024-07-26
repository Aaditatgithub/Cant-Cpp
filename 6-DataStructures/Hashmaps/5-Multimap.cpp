#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

//Multimaps : allow duplicate keys : implemented using BST
//          : OPS are O(logn), worst O(n)->range of elements


// Unordered Multimaps: duplicate keys are allowed
//     O(1) , worst is O(n);

int main(){

    multimap<string,int> dir;

    dir.insert(make_pair("naruto", 1));
    dir.insert(make_pair("JJK", 2));
    dir.insert(make_pair("AOT", 3));
    //dir["Vinland_Saga"] = 4;          not allowed

    unordered_multimap<string,int> fruitCount;

    fruitCount.insert({"apple", 1});
    fruitCount.insert({"Banana", 21});
    fruitCount.insert({"Banana", 101});

    for(auto itr : fruitCount){
        cout << itr.first << " - " << itr.second << "\n";
    }

    //equal_range(key) : method provides us with itr that increments from start ie position in map
    //      where key appears first


}