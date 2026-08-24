class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        int n1=s1.size();
        int n2=s2.size();
        for(int i=0;i<s1.size();i++){
            v1[s1[i]-'a']++;
        }
        int l=0;
        for(int r=0;r<n2;r++){
            v2[s2[r]-'a']++;
            if(r-l+1==n1){
                if(v1==v2) return true;
                v2[s2[l]-'a']--;
                l++;
            }
        }
        return false;
    }
};