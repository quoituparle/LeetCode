class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for (int i = 0; i < strs[0].length(); ++i) {
            char a = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                char b = strs[j][i];
                if (a != b) {
                    return strs[0].substr(0, i);
                }
            }
        };
        return strs[0];
    };
};