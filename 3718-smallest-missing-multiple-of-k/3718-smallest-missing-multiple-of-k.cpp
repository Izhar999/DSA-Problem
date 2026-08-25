class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int i=k;
        while(true){
            if(!mp.count(i)){
                return i;
            }
            i=i+k;
        }
        return -1;
    }
};