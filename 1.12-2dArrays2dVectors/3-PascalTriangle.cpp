#include<iostream>
#include<vector>
using namespace std;

int fact(int a){
    if(a == 1 || a == 0)
        return 1;
    return a * fact(a-1);
}

int C(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
/*
    int m, n;
    cin>> m>>n;
    //declaration
    vector<vector<int>> v;
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};
    vector<int> v3 = {7,8,9};

    v = {v1,v2,v3};
    
    vector<vector<int>> V(m,vector<int>(n,0));
                       //rows, columns of vectors with length n initialized with 0
*/

    int m;
    cin>>m;
    int n = 2*m-1;

    vector<vector<int>> V(m,vector<int>(n,0));

    for(int i = 0; i < m; i++){
        int count = i+1;
        int k = 0;
        int SpacestoLeave = m-i-1;
        for(int j = 0; j < n; j++){
            if(j >= SpacestoLeave && count){
                V[i][j] = C(i,k);
                j++;
                k++;
                count--;
            }
        }
    }   

    for(int i = 0; i< m; i++){
        for(int j = 0 ; j< n; j++){
            cout<< V[i][j] << " ";
        }
        cout<<endl;
    } 
    return 0;
}                   
