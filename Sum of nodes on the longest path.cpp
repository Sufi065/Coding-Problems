/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
  pair<int, int> func(Node *root){
      if(root==NULL)return {0, 0};
      pair<int, int>p1 = func(root->left);
      pair<int, int>p2 = func(root->right);
      if(p1.first>p2.first)return {p1.first +1, p1.second +root->data};
      if(p2.first>p1.first)return {p2.first +1, p2.second +root->data};
      else
      return {p1.first +1, max(p1.second,p2.second) +root->data};
      
      
  }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        pair<int, int>p = func(root);
        return p.second;
    }
};
