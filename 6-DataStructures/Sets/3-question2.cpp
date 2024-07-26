#include<iostream>
#include<set>
#include<vector>
using namespace std;

//find common elements b/w 2 vectors and return sum of them
int main(){

    int m, n;
    cin >> m >> n;

    vector<int> v1(m);
    vector<int> v2(n);
    set<int> s1;
    int ans_sum = 0;

    cout<< "enter elements of vector 1 : " ; 
    for (int i = 0; i < v1.size(); i++){
       cin >> v1[i];
    }
    cout << "\nenter the elements of vector 2 : ";

    for (int i = 0; i < v2.size(); i++){
       cin >> v2[i];
    }

    for(int ele : v1){
        s1.insert(ele);
    }

    for(int ele : v2){
        if(s1.find(ele) != s1.end()){
            ans_sum += ele;
        }
    }

    cout<< "\n Answer of the sum is : " << ans_sum;

}