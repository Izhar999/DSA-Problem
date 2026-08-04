class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> v;
        for(int i=nums[0];i<=nums[n-1];i++){
            if(!mp.count(i)){
                v.push_back(i);
                mp[i]++;
            }
        }
        return v;
    }
};