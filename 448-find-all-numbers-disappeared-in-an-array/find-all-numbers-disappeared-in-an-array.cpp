class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> nums_set;
        vector<int> ideal_nums;
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            nums_set.insert(nums[i]);
        }
        for (int j = 1; j < nums.size() + 1; ++j) {
            ideal_nums.push_back(j);
        }
        for (int k = 0; k < ideal_nums.size(); ++k) {
            if (!nums_set.contains(ideal_nums[k])) result.push_back(ideal_nums[k]);
        }
        return result;
    }
};