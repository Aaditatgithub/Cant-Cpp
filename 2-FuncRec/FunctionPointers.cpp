#include<iostream>
#include<vector>
using namespace std;

void PrintEach(){
    cout << "Hello world" << endl;
}

void ForEach(std::vector<int>& nums, void*(func)(int)){
    for(int &i : nums){
        func(i);
    }
}

int main(){

    //  Compiling code converts functions into CPU instructions stored in the executable file.
    //  Function pointers enable assigning functions to variables for later execution.
    // auto cherno = Hello;
    // void(*cherno)() = Hello;

    vector<int> values = {2,3,5,6,6,6};
    ForEach(values, PrintEach);

    cin.get();
}   
