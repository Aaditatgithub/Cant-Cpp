#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int Sum(int n, vector<int> &v){
    int sigma = 0;
    while(n>=0){
        sigma += v[n]; 
        n--;
    }
    return sigma;
}

bool EqualPartitions(vector<int> &v, int sum){
    for (int i = 0; i < 5 ; i++){
        int prefixSum = Sum(i,v);
        int suffixSum = sum - prefixSum;
        if(prefixSum == suffixSum){
            cout<<"After dividing at index " << i;
            return true;
        }
    }
    return false;   
}

int main(){

    int sum = 0;
    vector<int> v(5);

    for (int i = 0; i < 5; i++){
        cin>>v[i];
    }

    for(int ele:v){
        sum+=ele;
    }
    
    if(EqualPartitions(v,sum))
        printf("the sum of subarrays is equal");
    else
        printf("No partitions found");

    
} 