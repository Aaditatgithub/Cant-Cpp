#include<iostream>

// C++ templates allow you to create flexible, reusable code
// that adapts to different data types, making your programs
// more efficient and less repetitive.
// way more powerful than generics

// template doesnt actually exist until we call it, you could say it gets 'materialised' into real code
// that gets sent to the compiler and compiled based on the usage of the template

template<typename dataType>
void print(dataType _variable){
    std::cout << _variable << std::endl;
}

template <typename _dataType ,int _size>
class Array{
    private:
        _dataType m_Array[_size];
    public:
        int get_size() const {return _size;}
};

int main(){
    print(5);
    Array<int,5> arr;
}