#include<iostream>
#include<vector>
using namespace std;

int main(){

   vector<int> v(6);
   int key = 23;
   int loc = -1;

    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
    
    int i = 0;
    while(i < 6){
        if(v[i] == key){
            loc = i;
        }
        i++;
    }
    cout<<" Last occurenece was : "<< loc << endl;
}