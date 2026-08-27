class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftmaxi(n);
        vector<int> rightmaxi(n);

        leftmaxi[0]=height[0];
        for(int i=1;i<n;i++){
            leftmaxi[i]=max(leftmaxi[i-1],height[i]);
        }

        rightmaxi[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmaxi[i]=max(rightmaxi[i+1],height[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            int temp=min(leftmaxi[i],rightmaxi[i])-height[i];
            sum=sum+temp;
        }
        return sum;
        
    }
};