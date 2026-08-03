// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int res=0;
        int l=1;
        int r=n;
        while(r>=l){
            int m=l+(r-l)/2;
            if(isBadVersion(m)){
                res=m;
                r=m-1;
            }
            if(!isBadVersion(m)){
                l=m+1;
            }
        }
        return res;
    }
};