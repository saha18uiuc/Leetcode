class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int substr_len = 0;
        string longest_common = "";
        if (strs.size() == 1 || strs[0] == "") {
            return strs[0];
        }
        int min_len = strs[0].size();
        for (const auto& s : strs) {
            if (s.size() == 0) {
                return "";
            }
            min_len = min(min_len, (int)s.size());
        }
        for (int i = 0; i < min_len; ++i) {
            for (int j = 0; j < strs.size() - 1; ++j) {
                if (strs[j][i] != strs[j + 1][i]) {
                    return longest_common;
                }
            }
            longest_common += strs[0][i];
        }
        return longest_common;
    }
};