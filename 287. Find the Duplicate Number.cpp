#include<iostream>
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int slow=arr[0], fast=arr[0];

        do{
            slow = arr[slow];
            fast = arr[arr[fast]];
        }while(slow!=fast);

            slow=arr[0];
            
        while(slow!=fast){
            slow = arr[slow];
            fast = arr[fast];
        }
        return slow;
        
    }
};
int main(){
Solution s1;
s1();
return 0;}
//TC:O(n)
//sc:O(1)


