class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int la=-1;
        int ra=-1;
        while(r>=l){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                la=m;
                r=m-1;   
            }
            else if(nums[m]>target){
                r=m-1;
            }
            else if(nums[m]<target){
                l=m+1;
            }
        }
        int le=0;
        int ri=n-1;
        while(ri>=le){
            int m=le+(ri-le)/2;
            if(nums[m]==target){
                ra=m;
                le=m+1;   
            }
            else if(nums[m]>target){
                ri=m-1;
            }
            else if(nums[m]<target){
                le=m+1;
            }
        }
        return {la,ra};
    }
};