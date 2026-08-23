class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int l=0;
        int count=0;
        unordered_map<char,int> mp;
        mp['a']++;
        mp['e']++;
        mp['i']++;
        mp['o']++;
        mp['u']++;
        int maxi=INT_MIN;
        for(int r=0;r<n;r++){
            if(mp.count(s[r])){
                count++;
            }
            if((r-l)+1==k){
                maxi=max(maxi,count);
                if(mp.count(s[l])){
                    count--;
                }
                l++;
            }
        }
        return maxi;
    }
};