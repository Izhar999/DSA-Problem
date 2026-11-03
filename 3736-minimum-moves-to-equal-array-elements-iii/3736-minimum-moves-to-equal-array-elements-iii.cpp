class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=nums[nums.size()-1];
        int sum=0;
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            int r=m-nums[i];
            c=c+r;
        }
        return c;
    }
};