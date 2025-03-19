class Solution {
public:
 void genrate(int index,vector<int>& nums,vector<vector<int>>& ans){
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }
    unordered_set<int>s;
    for(int i=index;i<nums.size();i++){
        if(s.find(nums[i])!=s.end()) continue;
        s.insert(nums[i]);
        swap(nums[i],nums[index]);
        genrate(index+1,nums,ans);
         swap(nums[i],nums[index]);
    }
   }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        genrate(0,nums,ans);
        return ans;
    }
};
