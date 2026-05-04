#includ<iostream>
#includ<vector>
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        vector<int> lmax(n, 0);
        vector<int> rmax(n, 0);

        lmax[0]=height[0];
        rmax[n-1]=height[n-1];

        for(int i=1; i<n; i++){
            lmax[i] = max(lmax[i-1], height[i]);
        }

        for(int j=n-2; j>=0; j--){
            rmax[j] = max(rmax[j+1], height[j]);
        }

        for(int k=0; k<n; k++){
            ans+= (min(lmax[k], rmax[k] )- height[k]);
        }
        return ans;
        
    }
};
//TC:O(n)
SP:O(n)

