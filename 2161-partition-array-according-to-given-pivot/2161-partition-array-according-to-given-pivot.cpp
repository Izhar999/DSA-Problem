class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int lp=0;
        int ep=0;
        int gp=0;

        for(int i:nums){
            if(i>pivot){
                gp++;
            }
            if(i==pivot) ep++;
            if(i<pivot) lp++;
        }
        int i=0;
        int j=lp;
        int k=lp+ep;
        int n=nums.size();
        vector<int> v(n,0);
        for(int e:nums){
            if(e<pivot){
                v[i++]=e;
            } 
            if(e==pivot){
                v[j++]=e;
            }
            if(e>pivot){
                v[k++]=e;
            }
        }
        return v;
    }
};