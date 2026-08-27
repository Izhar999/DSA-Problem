class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0;
        int c=0;
        for(int r=n-1;r>=2;r--){
            l=0;
            int m=r-1;
            while(l<m){
                if(nums[l]+nums[m]>nums[r]){
                    c+=m-l;
                    m--;
                }
                else{
                    l++;
                }
            }
        }   
        return c;
    }
};