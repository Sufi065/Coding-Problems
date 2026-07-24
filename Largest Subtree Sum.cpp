/* structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
  
    int func(Node* root, int &ma){
        if(root==NULL)return 0;
        int lst = func(root->left, ma);
        int rst = func(root->right, ma);
        if(lst + rst + root->data > ma)
            ma = lst + rst + root->data;
            return lst+rst+root->data;
        
    }
    int maxSubtreeSum(Node* root) {
        // code here
        int ma = INT_MIN;
        func(root, ma);
        return ma;
    }
};
