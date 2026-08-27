class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int ma=0;
        while(l<r){
            int diff=min(height[l],height[r]);
            int res=diff*(r-l);
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
            
            ma=max(ma,res);
        }
        return ma;
    }
};