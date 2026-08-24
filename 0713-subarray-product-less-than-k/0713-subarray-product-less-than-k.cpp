class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int count=0;
        int pro=1;
        if(k<=1) return 0;
        for(int r=0;r<n;r++){
            pro=pro*nums[r];
            while(pro>=k){
                pro=pro/nums[l];
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }
};