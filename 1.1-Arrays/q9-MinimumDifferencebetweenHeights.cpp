#include<iostream>
using namespace std;

//https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int ans = arr[n-1] - arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]-k < 0)
                continue;
                
            int low_tower=min(arr[0]+k,arr[i]-k);
            int high_tower = max(arr[n-1]-k,arr[i-1]+k);
            ans=min(ans,high_tower-low_tower);
        }
        return ans;
    }

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}