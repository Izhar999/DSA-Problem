class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sumo=0;

        for(int i:nums){
            sumo+=i;
        }
        
        if(sumo<x) return -1;
        int l=0;
        int r=0;
        int t=sumo-x;
        if (t == 0){
            return n;
        }
        int sum=0;
        int yomaxi=0;
        while(r<n){
            sum=sum+nums[r];
            
            while(sum>t){
                sum=sum-nums[l];
                l++;
            }
            if(sum==t){
                yomaxi=max(yomaxi,(r-l+1));
            }
            r++;
        }
        if(yomaxi==0) return -1;
        return n-yomaxi;
    }
};