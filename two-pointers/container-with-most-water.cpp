class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int res = 0;
        while (left < right && left < n && right > 0) {
            int h = min(height[left], height[right]);
            int len = right - left;
            int currentArea = h * len;
            res = max(res, currentArea);
            if (height[left] > height[right]) {
                right--;
            } else {
                left++;
            }
        }
        return res;
    }
};