class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);
        for (int i = 0, j = x_str.size() - 1; i < x_str.size(), j >= 0; i++, j--) {
            if (x_str[i] != x_str[j]) {
                return false;
            }
        }
        return true;
    }
};