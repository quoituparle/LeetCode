class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int leftCache = 0, rightCache = 0;
        int output = 0;
        
        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftCache) leftCache = height[left];
                else output += leftCache - height[left];
                left++;
            } else {
                if (height[right] >= rightCache) rightCache = height[right];
                else output += rightCache - height[right];
                right--;
            }
        }
        return output;
    }
};