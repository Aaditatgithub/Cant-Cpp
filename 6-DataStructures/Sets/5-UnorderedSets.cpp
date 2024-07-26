#include<iostream>
#include<unordered_set>
using namespace std;

/*
    insertion deletion search : O(1);
    stored in random sequence

    insertion/Deletion/Find/Count:
        single element : avg O(1) , worst O(n)
        multiple eles : avg O(n) , worst O(n*(N+1)) --> n : no of elements, N : size of unorderedSet

*/

int main(){

    unordered_set<int> s1;
    s1.insert(23);
    s1.insert(12);
    s1.insert(69);
    s1.insert(6129);
    s1.insert(6932);
    

    for(int value: s1){
        cout << value << " ";
    }
}