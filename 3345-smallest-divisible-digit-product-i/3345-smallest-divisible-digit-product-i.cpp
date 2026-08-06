class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = n;
        
        while (true) {
            int m = 1;
            int l=num;
            while (l > 0) {
                int r = l % 10;
                m = m * r;
                l = l / 10;
            }
            if (m%t==0){
                return num;
            }
            num++;
        }
        
    }
};