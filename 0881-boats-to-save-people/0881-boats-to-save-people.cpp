class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.rbegin(),people.rend());
        int l=0;
        int r=n-1;
        int c=0;
        while(r>=l){
            if(people[l]<=limit){
                if(people[l]+people[r]<=limit){
                    r--;
                }
                else if(l+1<n && people[l]+people[l+1]<=limit){
                    l++;
                }
                c++;
            }
            l++;
        }
        return c;
    }
};