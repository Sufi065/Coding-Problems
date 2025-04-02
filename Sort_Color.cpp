class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c=0,c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0)c++;
           if(nums[i]==1)c1++;
           if(nums[i]==2)c2++;
        }
        int k=0;
        for(int i=0;i<c;i++)
            nums[k++]=0;
        
        for(int i=0;i<c1;i++)
            nums[k++]=1;
        
        for(int i=0;i<c2;i++)
            nums[k++]=2;
        
        
    }
};
