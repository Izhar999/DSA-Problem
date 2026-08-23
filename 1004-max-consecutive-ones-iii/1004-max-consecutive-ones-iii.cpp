class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        // if(k==0) return 0;
        unordered_map<int,int> mp;
        int l=0;
        int maxi=INT_MIN;
        mp[1]=0;
        mp[0]=0;
        for(int r=0;r<n;r++){
            mp[nums[r]]++;
            while(mp[0]>k){
                mp[nums[l]]--;
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};