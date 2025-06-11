class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int count = 0;
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == val) {
                count++;
            }
            k = nums.size() - count;
        }
        return k;
    }
};