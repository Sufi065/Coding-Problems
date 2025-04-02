class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int e=n-1;
        int start=0;
        while(start<e){
            swap(s[start],s[e]);
            start++;e--;
        }
    }
};
