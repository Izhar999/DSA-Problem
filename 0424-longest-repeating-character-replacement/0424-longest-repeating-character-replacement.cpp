class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0;
        int maxi=INT_MIN;
        vector<int> v(26,0);
        int mf=0;
        for(int r=0;r<n;r++){
            v[s[r]-'A']++;
            mf=max(mf,v[s[r]-'A']);
            if(r-l+1-mf>k){
                v[s[l]-'A']--;
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};