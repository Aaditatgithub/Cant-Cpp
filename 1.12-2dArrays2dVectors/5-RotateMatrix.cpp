#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Transpose(vector<vector<int>> &v){

    for (int i = 0; i < v.size() ; i++){
        for (int j = 0; j < i; j++)
        {
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
}

void RotateMatrix(vector<vector<int>> &v){

    Transpose(v);
    for(int i = 0; i < v.size() ; i++){
        reverse(v[i].begin(),v[i].end());
    }
}

void printMatrix(vector<vector<int>> &v){
    for (int i = 0; i < v.size(); i++)
    {   
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<< v[i][j] << " ";
        }
        cout<< endl;
    }
    cout<< endl;
}

void getMatrix(vector<vector<int>> &v){

     for (int i = 0; i < v.size(); i++) {   
        for (int j = 0; j < v[i].size(); j++)
        {
            cin>> v[i][j];
        }
    }

}

//Given a square matrix, turn it by 90 degrees in a clockwise direction without using extra space
int main(){
    
    vector<vector<int>> v(3,vector<int>(3));
    getMatrix(v);    
    printMatrix(v);
    RotateMatrix(v);
    printMatrix(v);

}