class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int l=0;
        int r=n-1;
        int m=0;
        char res='z';
        int light=0;
        while(r>=l){
            m=l+(r-l)/2;
            if(letters[m]<=target){
                l=m+1;
            }
            else{
                r=m-1;
            }

        }
        return letters[l%n];
    }
};