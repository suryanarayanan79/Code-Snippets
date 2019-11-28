
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  };
 
#include<vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> list;
        stack<TreeNode*> treeStack;
        if (root == nullptr) return list;
        treeStack.push(root);
        while (!treeStack.empty()) {
            TreeNode* current = treeStack.top();
            treeStack.pop();
            list.insert(list.begin(), current->val);
            if (current->left != nullptr) {
                treeStack.push(current->left);
            }
            if (current->right != nullptr) {
                treeStack.push(current->right);
            }
        }
        return list;
    }
};