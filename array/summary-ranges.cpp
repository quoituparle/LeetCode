class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};
        int s = 0;
        vector<string> ans;
        for (int i = 0; i < n; ++i) {
            if ((uint64_t)nums[i] - nums[s] != i - s) {
                ans.emplace_back(output(nums[s], nums[i-1]));
                s = i;
            }
        }
        ans.emplace_back(output(nums[s], nums[n-1]));
        return ans;
    }
private:
    string output(int a, int b) {
        if (a == b) return to_string(a);
        string output = to_string(a) + "->" + to_string(b);
        return output;
    }

    string output(int a) {
        return to_string(a);
    }
};