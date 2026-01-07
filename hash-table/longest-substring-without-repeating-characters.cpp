#include <vector>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
vector<int> last_seen(128, -1);
        int max_len = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            char current = s[right];
            
            // 如果当前字符之前出现过，尝试移动左指针
            // 使用 max 是为了防止 left 向后倒退（即忽略掉窗口左侧的重复历史）
            if (last_seen[current] >= left) {
                left = last_seen[current] + 1;
            }
            
            // 更新当前字符的最新位置
            last_seen[current] = right;
            // 实时计算并保留最大长度
            max_len = max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};