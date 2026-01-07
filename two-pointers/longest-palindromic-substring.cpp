class Solution {
public:
    string longestPalindrome(string s) {
        int length = s.length();
        int max_len;
        int med;
        for (int i = 0; i < length; ++i) {
            if (s[i-1] == s[i+1]) {
                for (int j = 0; j < i; ++j) {
                    if (s[i-j] !== s[i+j]) {
                        if (max_len < 2j + 1) {
                            max_len = 2j + 1;
                            med = i;
                            break;
                        }
                    }
                }
            }
            if (s[i] == s[i+1]) {
                for (int j = 0; j < i; ++j) {
                    if (s[i-j] !== s[i+j+1]) {
                        if (max_len < 2j + 2) {
                            max_len = 2j + 2;
                            med = i;
                            break;
                        }
                    }
                }
            }
        }
        if (max_len%2 ！= 0) {
            return s.substr(med-(max_len-1)/2,med+(max_len-1)/2)
        } else {
            return s.substr(med-(max_len-2)/2,med+(max_len-2)/2)
        }
        
    }
};