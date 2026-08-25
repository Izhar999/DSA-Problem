class Solution {
public:
    bool you(vector<int> & v){
        for(int i=0;i<3;i++){
            if(v[i]<1){
                return false;
            }
        }
        return true;
    }
    int numberOfSubstrings(string s) {
        int n=s.size();
        int l=0;
        int res=0;
        vector<int>v(3,0);
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
            while(you(v)){
                res+=n-i;
                v[s[l]-'a']--;
                l++;
            }
        }
        return res;
    }
};