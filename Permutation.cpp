class Solution {
public:

   void genrate(int index,int size,vector<int>& nums,vector<vector<int>>& ans){
    if(index==size){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<size;i++){
        swap(nums[i],nums[index]);
        genrate(index+1,size,nums,ans);
         swap(nums[i],nums[index]);
    }
   }

    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        genrate(0,n,nums,ans);
        return ans;
        
    }
};
