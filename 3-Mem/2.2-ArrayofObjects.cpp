#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"ID of this item is: "<< id << endl;
            cout<<"Price of this item is: "<< price << endl;
        }
};

int main(){

    int size = 3;
    int p,q;
    shop *ptr = new shop[size];

    for (int i = 0; i < size; i++)  {
        cout<<"ID and price of item "<<i+1<<" is? "<<endl;
        cin>>p>>q;
        ptr[i].setData(p,q);
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"ID and price of item "<<i+1<<" are"<<endl;
        ptr[i].getData();
    }
    
} 