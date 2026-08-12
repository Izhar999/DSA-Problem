class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int st=0;
        int end=m*n-1;
        while(end>=st){
            int m=st+(end-st)/2;
            if(matrix[m/n][m%n]>target){
                end=m-1;
            }
            else if(matrix[m/n][m%n]<target){
                st=m+1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};