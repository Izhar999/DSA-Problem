class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i:piles){
            if(i>maxi){
                maxi=i;
            }
        }
        int l=1;
        int r=maxi;
        int mini=INT_MAX;
        while(r>=l){
            int m=l+(r-l)/2;
            long long count=0;
            for(int i=0;i<n;i++){
                if(piles[i]%m==0){
                    count+=piles[i]/m;
                }
                else if(piles[i]<m){
                    count+=1;
                }
                else{
                    count+=(piles[i]/m)+1;
                }
            }
            if(count<=h){
                mini=min(mini,m);
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        
        return mini;
    }
};