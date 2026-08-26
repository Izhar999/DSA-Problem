class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> v;
        int l=0;
        int r=n-1;
        int sum=0;
        while(l<r){
            sum=numbers[l]+numbers[r];
            if(sum>target){
                r--;
            }
            else if(sum==target){
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            else{
                l++;
            }
        }
        return v;
    }
};