class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller;
        for (int i = 0; i < nums.size(); i++) {
            int smaller_count = 0;
            for (int j = 0; j < nums.size(); ++j) {
                if (i == j) {
                    continue;
                }
                if (nums[j] < nums[i]) {
                    smaller_count++;
                }
            }
            smaller.push_back(smaller_count);
        }
        return smaller;
    }
};