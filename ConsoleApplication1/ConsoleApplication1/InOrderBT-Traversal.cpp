/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> localStack;
        vector<int> localVector;
        if (root == nullptr) return localVector;
        while (true) {
            if (root != nullptr) {
                localStack.push(root);
                root = root->left;
            }
            else {
                if (localStack.empty()) break;
                root = localStack.top();
                localStack.pop();
                localVector.push_back(root->val);
                if (root != nullptr)root = root->right;
            }
        }
        return localVector;
    }
};