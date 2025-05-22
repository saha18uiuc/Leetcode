class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> nums_map;
        for (int i = 0; i < nums.size(); ++i) {
            int remaining = target - nums[i];
            if (nums_map.find(remaining) != nums_map.end()) {
                return {nums_map[remaining], i};
            }
            nums_map[nums[i]] = i;
        }
        return {0, 0};
    }
};