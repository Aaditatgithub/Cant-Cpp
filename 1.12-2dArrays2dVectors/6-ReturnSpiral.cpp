#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(vector<vector<int>>& v){

    int left = 0;
    int right = v[0].size() - 1;
    int top = 0;
    int bottom = v.size() - 1;

    int direction = 0;
    while(left<=right && top<=bottom){

        //left->right
        if(direction == 0){
            for(int col= 0; col < right; col++){
                cout<<v[top][col] << " ";
            }top++;
        }
        //right->bottom
        else if(direction == 1){
            for (int row = top; row <= bottom; row++)
            {
               cout<<v[row][right] << " ";
            }
            right--;
        }
        //right->left
        else if(direction == 2){
            for (int col = right; col >= left; col--){
               cout<<v[bottom][left] << " ";
            }
            bottom--;
        }
        else{
            for (int row = right; row <= right; row--){
               cout<<v[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1)%4;
    }
}

//For a positive integer n, generate nxn matrix filled with elements from n1 to n2 in spiral order.
int main(){

    int m,n;
    cin >> m >> n;
    vector<vector<int>> v(m,vector<int>(n));

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    
    spiralOrder(v);
}