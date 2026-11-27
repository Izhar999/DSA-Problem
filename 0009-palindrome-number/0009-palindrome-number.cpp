class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        if(x<0) return false;
        while(x!=0){
            int r=x%10;
            v.push_back(r);
            x=x/10;
        }
        int n=v.size();
        int l=0;
        int r=n-1;
        while(r>l){
            if(v[l]!=v[r]) return false;
            r--;
            l++;
        }
        return true;
    }
};