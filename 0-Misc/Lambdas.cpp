#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;

void ForEach(std::vector<int>& nums, std::function<void(int)>& func){
    for(int &i : nums){
        func(i);
    }
}

int main(){
    vector<int> values = {2,3,5,6,6,6};

    // returns an iterator to the part of vector whose values are greater than 3
    auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3;});

    cout << *it << endl;

    int a = 5;

    //captures -> how do you wanna pass the variables
    //type <lambda-name> = [captures]()
    auto lambda = [&a](int value) mutable {
    
        a = 5; // would throw error; use mutable keyword
        cout << a << " " << value << endl;    
    };
}