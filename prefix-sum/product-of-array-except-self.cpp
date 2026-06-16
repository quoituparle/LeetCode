class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; ++i) {
            int prd = 1;
            for (int p = 0; p < n; ++p) {
                if (p == i) continue;
                prd *= nums[p];
            }
            ans.emplace_back(prd);
        }
        return ans;
    }
};