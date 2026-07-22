/* Structure for Tree Node
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
  
  int func(Node* root){
      if(root==NULL)return 0;
      int lft = func(root->left);
      int rht = func(root->right);
      int x = root->data;
      root->data = lft+rht;
      return lft+rht+x;
  }
    void toSumTree(Node *node) {
        // code here
        func(node);
    }
};
