class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Maxnum = 0;
        int n = nums.size();
        int currentSum = 0;
        for (int i = 0; i < n; ++i) {
            currentSum += nums[i];

            if (currentSum < 0) currentSum = 0;
            Maxnum = max(Maxnum, currentSum);
        }
        return Maxnum;
    }
};