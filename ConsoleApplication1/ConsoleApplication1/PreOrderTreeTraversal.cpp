#include<vector>
#include<stack>
using namespace std;
  //Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> outputVector;
        if (root == nullptr) return outputVector;

        stack <TreeNode*> localStack;

        localStack.push(root);
        while (!localStack.empty()) {
            TreeNode* subNode = localStack.top();
            outputVector.push_back(subNode->val);
            localStack.pop();
            if (subNode->right != nullptr) localStack.push(subNode->right);
            if (subNode->left != nullptr) localStack.push(subNode->left);
        }
        return outputVector;
    }
};