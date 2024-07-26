#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

/*
    insertion, searching, sorting : O(1)
*/

class Hashing{
    private:
        vector<list<int>> hashtable;
        int buckets;
        
    public:
        Hashing(int size){
            buckets = size;
            hashtable.resize(size);
        }

        int Hashvalue(int key){
            return (key % buckets);   //division method
        }

        void add(int key){
            int index = Hashvalue(key);
            hashtable[index].push_back(key);
        }   

        list<int>:: iterator search(int key){
            
            int index = Hashvalue(key);
            return find(hashtable[index].begin(), hashtable[index].end(),key);
        }

        void deleteKey(int key){
            int index =  Hashvalue(key);
            if(search(key) != hashtable[index].end()){
                hashtable[index].erase(search(key));
                cout << key << " is deleted \n" ;
            }
            else{
                cout << "Key is not present in the hashtable \n";
            }
        }

};


int main(){

    Hashing *h = new Hashing(10);
    h->add(5);
    h->add(9);
    h->add(12);

    h->deleteKey(5);
    h->deleteKey(5);
    return 0;
}