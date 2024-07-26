#include<iostream>
#include<vector>
using namespace std;

//For a boolean 2-D array where each row is sorted, find the row with a maximum number of 1s.

int main(){

    int m , n;
    cin>> m >> n;
    vector<vector<int>> V(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin>>V[i][j];
        }
    }
    
    int Index_of_first_one = m;
    int Row_with_max_sum = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < Index_of_first_one; j++)  {
            if(V[i][j]){
                Row_with_max_sum = i;
                Index_of_first_one = j;
            }
        }
    }
    
    cout<<endl << "Row : " << Row_with_max_sum + 1 ; 

}