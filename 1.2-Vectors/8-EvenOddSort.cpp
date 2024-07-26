#include<iostream>
#include<vector>
using namespace std;

//sort the array such that first all the even nos are, and then the odd nos.
int main(){

    vector<int> v(6);
    for(int i = 0; i < 6; i++){
        cin >> v[i];
    }

    int i = 0;
    int j = 5;
    while(i < j){

        if(v[j]%2 == 0){

            if(v[i]%2 != 0){

                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
                i++; j--;
            }
            else{
                i++;
            }
        }
        else{
            j--;
        }
    }
    for(int ele : v){
        cout << ele << " ";
    }
}