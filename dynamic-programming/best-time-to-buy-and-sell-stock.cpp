class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bestBuy = prices[0], ans = 0;
        for (int i = 0; i < n; ++i) {
            if (prices[i] <= bestBuy) {
                bestBuy = prices[i];
                ans = max(ans, (prices[i] - bestBuy));
            } else {
                ans = max(ans, (prices[i] - bestBuy));
            }
        }
        return ans;
    }
};