class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int n=s.size();
        if(n<3){
            return *s.rbegin();
        }
        return *next(s.rbegin(), 2);
    }
};