#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
        char data;
        vector<node*> children;
        node(char data){
            this->data = data;
        }
};

int main(){

    node* root = new node('A');
    root->children.push_back('B');
    
}