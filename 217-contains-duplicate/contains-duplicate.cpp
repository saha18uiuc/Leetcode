class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> nums_set;
        for (int i = 0; i < nums.size(); ++i) {
            if (!nums_set.contains(nums[i])) {
                nums_set.insert(nums[i]);
            } else {
                return true;
            }
        }
        return false;
    }
};