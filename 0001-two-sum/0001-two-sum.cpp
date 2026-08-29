class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int tempi=target-nums[i];
            if(mp.find(nums[i])==mp.end()){
                mp[tempi]=i;
            }
            else{
                return {mp[nums[i]],i};
            }

        }
        return {};
    }
};