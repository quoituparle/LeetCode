class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        for (char a : jewels) {
            for (char b : stones) {
                if (a == b) {
                    ans++;
                }
            }
        }
        return ans;
    }
};