#include<iostream>
using namespace std;

int main(){

    int m = 3;  //rows
    int n = 4;  //cols

    //Rectangular Pattern
    for (int i = 0; i < m; i++)
    {   
        for (int j = 0; j < n; j++)
        {   
            if((i == 0) || (i == m-1) || (j == 0) || (j == n-1))
                cout << "*";

            else    
                cout<<" ";
        }
        cout << endl;
    }

    //Triangular Pattern(REV)
    for (int i = m; i > 0; i--)
    {   
        for (int j = 0; j < i; j++)
        {   
                cout << "*";
        }
        cout << endl;
    }

    //Pyramid Pattern
    for (int i = 1; i <= m ; i++)
    {   
        for(int j = 1; j<=(m-i); j++)
            cout<<" ";

        for(int j = 1; j <= 2*i-1 ; j++)
            cout<<"*";

        cout<<endl;
    }

    //NumericalRectangular Pattern
    for (int i = 1; i <= m; i++)
    {
        for (int j = i; j <= m ; j++)
            cout<<j; 
        
        for (int j = 1; j <= i; j++)
            cout<<j;

        cout<<endl;
    }   

    //DiamondABC
    for(int i = 0; i < m ; i++){
        for(int j = m-i-1; j > 0; j--){
            cout<< " ";
        }
        for(int k = 0; k < 2*i+1 ; k++){
            cout<< char(65 + k);
        }
        cout<<endl;
    }
    for(int i = m-2; i >= 0; i--){
        for(int j = 0; j < m-i-1; j++){
            cout<< " ";
        }
        for(int k = 0; k < 2*i+1 ; k++){
            cout<< char(65 + k);
        }
        cout<<endl;
    }

    return 0;
}