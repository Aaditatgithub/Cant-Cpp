#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> name_of_vector;
    vector<int> v;
    //vector<data_type> vector_name(size); 
    cout<<"Size:" << v.size()<< endl;
    
    v.push_back(1);
    cout<<"Size:" << v.size()<< endl;
    cout<<"capacity: "<< v.capacity() << endl;

    v.push_back(23);
    cout<<"Size:" << v.size()<< endl;
    cout<<"capacity: "<< v.capacity() << endl;
    
    v.push_back(45);
    cout<<"Size:" << v.size()<< endl;
    cout<<"capacity: "<< v.capacity() << endl;

    v.push_back(176);
    cout<<"Size:" << v.size()<< endl;
    cout<<"capacity: "<< v.capacity() << endl;

    v.push_back(189);
    cout<<"Size:" << v.size()<< endl;
    cout<<"capacity: "<< v.capacity() << endl;

    v.pop_back();
    v.pop_back();
    cout<<"Size:" << v.size()<< endl;
    cout<<"capacity: "<< v.capacity() << endl;

    //ways of traversing vector
    for(int ele:v)
        cout<<ele<<" ";
    cout<<endl; 

    v.insert(v.begin() + 3, 6);
    v.erase(v.end() - 2);
    
    int i =0;
    while(i < v.size()){
        cout<<v[i++]<<" ";
    }    

}