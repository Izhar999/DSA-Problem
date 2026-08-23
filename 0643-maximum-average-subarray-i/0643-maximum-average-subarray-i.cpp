class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double l=0;
        double r=0;
        double maxi=INT_MIN;
        double n=nums.size();
        double sum=0;
        while(r<n){
            sum=sum+nums[r];
            if(r-l+1==k){
                maxi=max(maxi,sum/k);
                sum=sum-nums[l];
                l++;
            }
            r++;
        }
        return maxi;
    }
};