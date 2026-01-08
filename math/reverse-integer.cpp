class Solution {
public:
    int reverse(int x) {
        int m = 0;
        if (x>0) {
            while (x) {
                m = m*10 + x%10;
                x = (x-x%10)/10;
            }
        } else {
            while (x) {
                m = m*10 + x%10;
                x = (x+x%10)/10;
            }
        }
        return m;
    }
};