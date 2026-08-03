class Solution {
public:
    vector<int> dp;
    int you(vector<int>& s,int i){
        if(i>=s.size()) return 0;
        if(dp[i]!=INT_MIN) return dp[i];
        int result = INT_MIN;
        result=max(result,s[i]-you(s,i+1));
        if(i+1<s.size())
        result=max(result,s[i]+s[i+1]-you(s,i+2));
        if(i+2<s.size())
        result=max(result,s[i]+s[i+1]+s[i+2]-you(s,i+3));

        return dp[i]=result;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        dp.assign(stoneValue.size(),INT_MIN);
        int res=you(stoneValue,0);
        if(res<0){
            return "Bob";
        }
        else if(res>0) return "Alice";
        else return "Tie";
    }
};