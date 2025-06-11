class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> nums_set;
        nums_set.insert(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() + 1; ++i) {
            if (!nums_set.contains(i)) {
                return i;
            }
        }
        return 0;
    }
};