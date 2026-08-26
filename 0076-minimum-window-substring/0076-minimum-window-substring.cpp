class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        vector<int> v(128,0);

        for(char i:t){
            v[i]++;
        }

        int st=0;
        int len=INT_MAX;
        int l=0;
        int need=t.size();
        for(int r=0;r<n;r++){
            if(v[s[r]]>0){
                need--;
            }
            v[s[r]]--;
            while(need==0){
                if(r-l+1<len){
                    st=l;
                    len=r-l+1;
                }
                v[s[l]]++;
                if(v[s[l]]>0){
                    need++;
                }
                l++;
            }

        }
        if(len==INT_MAX) return "";
        return s.substr(st,len);
    }
};