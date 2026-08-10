class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=1;
        long long r=num;
        while(r>=l){
            long long m=l+(r-l)/2;
            long long sq=m*m;
            if(sq==num){
                return true;
            }
            else if(sq>num){
                r=m-1;
            }
            else if(sq<num){
                l=m+1;
            }
        }
        return false;
    }
};