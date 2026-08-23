class Solution {
public:
    int minDays(vector<int>& bloomDay, int b, int k) {
        int n=bloomDay.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        if ((long long)b * k > n)
            return -1;

        for(int i:bloomDay){
            mini=min(mini,i);
            maxi=max(maxi,i);
        }

        int l=mini;
        int r=maxi;
        int res=INT_MAX;
        while(r>=l){
            int m=l+(r-l)/2;
            int count=0;
            int bc=0;
            for(int i=0;i<n;i++){
                if(m>=bloomDay[i]){
                    count++;
                    if(count==k){
                        count=0;
                        bc++;
                    }
                }
                else{
                    count=0;
                }
            }
            
            if(bc>=b){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};