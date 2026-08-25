class Solution {
public:
    int you(vector<int>& nums,int k){       //atmost
        int n=nums.size();
        int l=0;
        int res=0;
        unordered_map<int,int> mp;
        for(int r=0;r<n;r++){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            res+=r-l+1;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return you(nums,k)-you(nums,k-1);
    }
};