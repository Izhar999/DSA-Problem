class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int mini_ind=0;
        int maxi_ind=0;
        int n=nums.size();
        if(n==1) return 1;

        for(int i=0;i<nums.size();i++){
            if(maxi<nums[i]){
                maxi=nums[i];
                maxi_ind=i+1;
            }
            if(mini>nums[i]){
                mini=nums[i];
                mini_ind=i+1;
            }
        }
        cout<<maxi_ind<<" "<<mini_ind;
        int lmaxi=max(mini_ind,maxi_ind);
        int rmini=min(mini_ind,maxi_ind);
        int sumo=(rmini)+(n-lmaxi+1);
        cout<<"sumo="<<lmaxi<<" "<<rmini<<" "<<sumo;
        return min(sumo,min(lmaxi,n-rmini+1));

    }
};