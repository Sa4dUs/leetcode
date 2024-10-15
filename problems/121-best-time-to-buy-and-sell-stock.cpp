// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
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
};