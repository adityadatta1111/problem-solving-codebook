class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        int sum = 0, nums_size = nums.size();

        for (int i = 0; i < nums_size; ++i) {
            for (int j = i + 1; j < nums_size; ++j) {
                if ((nums[i] + nums[j]) == target) {
                    return {i, j};
                }
            }
        }
        return {0};
    }
};