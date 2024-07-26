#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,676,899};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //input
    for(int &ele: arr){
        cin >> ele;
    }

    //Traversals
    for(int ele : arr){       //here things are copied into a variable called 'ele' and then printed
        cout<< ele << " ";
    }
    cout<<endl;

    for (int i = 0; i < n; i++) {
        cout<< arr[i] << " ";
    }

}