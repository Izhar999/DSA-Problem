class Solution {
public:
    bool check(vector<int>& digits,int num){
        unordered_map<int,int> mp;
        for(int i:digits){
            mp[i]++;
        }
        for(int i=0;i<3;i++){
            int r=num%10;
            if(mp[r]<1){
                return false;
            }
            mp[r]--;
            num=num/10;
        }
        return true;
    }
    int totalNumbers(vector<int>& digits) {
        sort(digits.begin(),digits.end());
        int n=digits.size();
        int e=digits[n-1]*100+digits[n-2]*10+digits[n-3]*1;
        int count=0;
        for(int i=100;i<=e;i++){
            if(check(digits,i) && i%2==0){
                cout<<i<<" ";
                count++;
            }
        }
        return count;
    }
};