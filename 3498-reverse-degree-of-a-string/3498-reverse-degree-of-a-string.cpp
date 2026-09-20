class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sumo=0;
        for(int i=0;i<n;i++){
            int num='z'-s[i]+1;
            int pro=num*(i+1);
            sumo+=pro;
        }
        return sumo;
    }
};