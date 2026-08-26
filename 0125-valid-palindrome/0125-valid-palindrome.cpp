class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(r>l){
            while(!isalnum(s[r]) && r>l) r--;
            while(!isalnum(s[l]) && r>l) l++;
            if(toupper(s[r])!=toupper(s[l])) return false;
            r--;
            l++;
        }
        return true;
    }
};