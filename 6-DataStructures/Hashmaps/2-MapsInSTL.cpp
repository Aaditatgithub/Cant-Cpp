#include<iostream>
#include<map>
using namespace std;

//ORDERED MAPS
int main(){

    // by default descending order, if greater<string> is used then ascending order
    map<string,int> directory;

    //ways to insert    -----------------------> O(logn)
    directory["naman"] = 2475;
    directory["animesh"] = 1233;
    directory["ritu"] = 154;
    directory.insert(make_pair("aaditya",2346));
    directory.insert({"Jaishankar", 2356});

    //if I insert director({"ritu", 54});   
    //  I WONT BE ABLE TO, SINCE IT IS ALREADY PRESENT; THUS IGNORED
    // I CAN REASSIGN THE VALUE TO RITU BY: directory["ritu"] = value; -> can be used for inserting directly

    //ways to erase --------------------------->O(logn) , O(n) for range deletion
    directory.erase("naman");

    //swapping maps : m1.swap(m2) , swap(m1,m2);
    //clearing a map : m.clear();
    
    //checking size : 
    // cout << directory.size() << "\n";

    // finding : returns an iterator (if not found then map.end() -----> O(logn)
    // auto itr = directory.find("ritu");
    // cout <<"Key : " << itr->first << " Value : " << itr->second << "\n";

    // for(auto element : directory){
    //     cout << "Name : " << element.first  << "\n";
    //     cout << "Phone No : " << element.second << "\n";
    // }

    // map<int,string> Lokas;
    // Lokas.insert({3,"Nagas"});
    // Lokas.insert({1,"Swarga"});
    // Lokas.insert({2,"Patala"});
    
    // auto itr1 = Lokas.upper_bound(2);
    // cout << itr1->second << "\n";

    // itr1 = Lokas.lower_bound(2);
    // cout << itr1->second << "\n";
    // return 0;

    //reverse traversing
    map<string,int>:: reverse_iterator trav;
    for(trav = directory.rbegin() ; trav != directory.rend() ; trav++){
        cout << trav->first << " - " << trav->second << "\n"; 
    } 


}