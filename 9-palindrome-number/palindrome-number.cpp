class Solution {
public:
    bool isPalindrome(int x) {
        string x_string = to_string(x);
        for (int i = 0, j = x_string.size() - 1; i < x_string.size(), j >= 0; i++, j--) {
            if (x_string[i] != x_string[j]) {
                return false;
            }
        }
        return true;
    }
};