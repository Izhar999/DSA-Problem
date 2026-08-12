class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(r>l){
            int m=l+(r-l)/2;
            if(nums[r]<nums[m]){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        return nums[l];
    }
};