#include<iostream>
#include<string>

//String literals are always stored in read only memory (CONST SEGMENT)
//   to ensure the immutability of string literals
//   If we declare a string and try to modify it we end up manipulating the pointer in const seg, thus an undefined behaviour
//   In arrays, mutability is achieved by creating a copy of variable, modifying it and then storing it. 

int main(){

    const char* name {"Cherno"};
    const wchar_t* name1 {L"Cherno"};   //2 byte chars [4 on linux at times while using UTF32](Unicode)
    const char16_t* name2 {u"Cherno"};  //2 byte chars, working with UTF-16 encoded strings
    const char32_t* name3 {U"Cherno"};  //4 byte chars

    using namespace std:: string_literals; 
    
    //WAYS for concat
    std::string name0 {std::string("Cherno") + "hello"};
    std::string name23 {"Cherno"s + "hola"};

    //R ignores escape characters
    std::string ala {R"(line1"
        "line2"
        "line3)"    
    };

    std::cout << ala;     

}