class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int maxi=-1;
        if(k==1){
            for(int i:nums){
                if(mp[i]==1 && i>maxi){
                    maxi=i;
                }
            }
            return maxi;
        }
        else if(k==n){
            return *max_element(nums.begin(),nums.end());
        }
        else if(mp[nums[0]]==1 && mp[nums[n-1]]==1){
            return max(nums[0],nums[n-1]);
        }
        else if(mp[nums[0]]!=1 && mp[nums[n-1]]==1){
            return nums[n-1];
        }
        else if(mp[nums[0]]==1 && mp[nums[n-1]]!=1){
            return nums[0];
        }
        return -1;

    }
};