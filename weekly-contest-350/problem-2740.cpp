class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int n = nums.size();
        int min_diff = INT_MAX;
        
        vector<int>sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        
        int max_left = sorted_nums[0];
        int min_right = sorted_nums[n-1];
        
        for (int i = 1; i < n; i++) {
            max_left = max(max_left, sorted_nums[i-1]);
            min_right = sorted_nums[i];
            min_diff = min(min_diff, abs(max_left-min_right));
        }
        
        return min_diff;
    }
};
