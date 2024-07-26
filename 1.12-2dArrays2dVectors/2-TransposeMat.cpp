#include<iostream>
using namespace std;

int main(){
    
    int Mat[3][3];
    int MatTrans[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin>> Mat[i][j];
        }
    }
    //printing the original matrix formed
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<< Mat[i][j] << " ";
        }cout<<endl;
    }
    
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
                MatTrans[i][j] = Mat[j][i];
                MatTrans[j][i] = Mat[i][j];
        }
    }
    // printing the transpose
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<< MatTrans[i][j] << " ";
        }cout<<endl;
    }
    
    
}