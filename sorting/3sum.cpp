class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int N = nums.size();
        vector<vector<int>> res;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                for (int k = j + 1; k < N; ++k) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        res.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        return res;
    }
};