// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices) {
    int n = size(prices);
    int min_val = prices[0];

    int dp[n];
    dp[0] = 0;

    for (int i = 1; i < n; ++i) {
        if (prices[i] < min_val)
            min_val = prices[i];

        dp[i] = max(dp[i - 1], prices[i] - min_val);
    }

    return dp[n - 1];
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int output = maxProfit(prices);
    cout << output;
}
