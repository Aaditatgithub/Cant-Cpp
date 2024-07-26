#include<iostream>
#include<set>
using namespace std;
/*
Set : STL container used to store unique values
 Values are stored in ordered manner(increasing/decreasing)
No indexing, elements are identified by their own value
Once inserted, value cannot be modified

Advantages : unique values, ordered , dynamic size, no overflowing errors, faster
    insertion, deletion,search : O(logN)
Dis-|- : cannot access elements by indexing, more memory than array, not for large datasets

IMPLEMENTED BY BINARY SEARCH TREE INTERNALLY [RED BLACK TREE]
---------------------------------------------------------------------------------------
set <data_type> set_name;
set<int , greater<datatype>> set_name  --> for storage in decreasing order

set.begin() - points to starting element 
set.end() - points to element after the last one

Not a good practice to use auto keyword, warning is given by the compiler, still u have an option
*/

int main(){

    set<int> s;
    s.insert(6);                // O(logN)
    s.insert(12);
    s.insert(10);

    cout << s.size() << "\n";
    s.insert(10); s.insert(1023); s.insert(2310); s.insert(15230);


//Traversing
    set<int> :: iterator itr;
    set<int> :: iterator end_itr;
    // above was a way to create an iterator for set with int values
    //could have done this by for(auto itr = s.begin()...)
    // for(itr = s.begin(); itr != s.end(); itr++){
    //     cout << *itr << " "; 
    // }cout << endl;

//by using auto we don't have to define the datatype of 'value' eventho it is being inferred after 
//specifying set s
  
    // for (auto value : s){
    //     cout<< value << " ";
    // }cout << "\n";
 
    s.erase(12); //deleting element 12
    // itr = s.begin();
    // end_itr = s.begin();
    // advance(end_itr, 3);    
    // s.erase(itr,end_itr);

    for(itr = s.begin(); itr!=s.end();itr++){   
        cout<< *itr << " ";
    }

    cout<< "\n" <<s.size();
    cout<< "\n" << s.max_size() << "\n";
    
    cout << s.count(1023) << "\n";
    
    s.find(1024); // returns an iterator

    
}