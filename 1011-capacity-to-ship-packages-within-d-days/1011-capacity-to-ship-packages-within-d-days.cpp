class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxi=INT_MIN;
        int total=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,weights[i]);
            total+=weights[i];
        }
        int l=maxi;
        int r=total;
        int mini=0;
        while(r>=l){
            int temp_sum=0;
            int m=l+(r-l)/2;
            int count=0;
            for(int i=0;i<n;i++){
                if(temp_sum+weights[i]>m){
                    count++;
                    temp_sum=weights[i];
                }
                else{
                    temp_sum+=weights[i];
                }
            }
            if(count<days){
                mini=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return mini;
    }
};