class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int m=0;
        while(r>=l){
            int m=l+(r-l)/2;
            if(nums[m]==target) return m;
            else if(nums[m]>target) r=m-1;
            else if(nums[m]<target) l=m+1;
        }
        if(nums[m]<target) return r+1;
        else return l;
    }
};