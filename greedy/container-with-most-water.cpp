class Solution {
public:
    int maxArea(vector<int>& height) {
        int N = height.size();
        int ans = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j <= i; ++j) {
                int minHeight = min(height[j], height[N-i-1+j]);
                int current = minHeight*(N-i-1);
                ans = max(ans, current);
            }
        }
        return ans;      
    }
};