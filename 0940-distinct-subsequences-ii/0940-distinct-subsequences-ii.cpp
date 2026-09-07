class Solution {
public:
    int dp[2001];
    int M=1e9+7;
    vector<int> prev;
    int solve(int n){
        if(n==0){
            return 1;
        }
        if(dp[n]!=-1) return dp[n];
        int total=(2*solve(n-1))%M;
        if(prev[n]!=0){
            int dup=solve(prev[n]-1);
            total=(total-dup+M)%M;
        }
        return dp[n]=total;
    }

    int distinctSubseqII(string s) {
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        vector<int> lseen(26,0);
        prev.assign(n+1,0);

        for(int i=1;i<=n;i++){
            int idx=s[i-1]-'a';
            prev[i]=lseen[idx];
            lseen[idx]=i;
        }

        return (solve(n)-1+M)%M;
    }
};