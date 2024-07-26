#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

// Given a series of N daily pkice quotes fok a stock, we need to calculate the span of the stock’s price for all
// N days. The span of the stock's price in one day is the maximum number of consecutive days (starting from
// that day and going backward) for which the stock price was less than or equal to the price of that day.
// The first line of input contains the value of N.
// The second line of input contains the stock price for each day.

//INPUT
// 7
// 100 80 60 70 60 75 85

// OUTPUT
// 1 1 1 2 1 4 6


int main(){

    vector<int> daily_prices {100,80,60,70,60,75,85};           // to find previous greater index
    for(int i = 0; i < daily_prices.size(); i++){
        cout << daily_prices[i] << " ";
    }cout << "\n";

    reverse(daily_prices.begin(), daily_prices.end());          // to find next greater index

    stack<int> st;
    st.push(0);
    vector<int> output(daily_prices.size(), 1);

    for(int i = 1; i < daily_prices.size(); i++){
        while(!st.empty() && daily_prices[i] > daily_prices[st.top()]){
            output[st.top()] = i - st.top()
            ;
            st.pop();
        }
        st.push(i);
    }

    reverse(output.begin(), output.end());
    for(int i = 0; i < output.size(); i++){
        cout << output[i] << " ";
    }cout << "\n";

}