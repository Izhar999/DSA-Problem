class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int county = 0;

        int mini = INT_MAX;
        county++;
        for (int i = 0; i < n; i++) {
            mini = min(mini, nums[i]);
        }

        for (int i = 0; i < n; i++) {
            county += nums[i] - mini;
        }

        return county-1;
    }
};