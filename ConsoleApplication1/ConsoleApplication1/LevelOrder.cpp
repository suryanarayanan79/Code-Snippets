#include<vector>
#include<queue>
using namespace std;
 //Definition for a binary tree node.
// Lessons Learnt how to use the two dimension vector 
  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}; 
 
        class Solution {
        public:
            vector<vector<int>> levelOrder(TreeNode* root) {
                vector<vector<int>> twoDimVector;
                vector<int> inner;
                queue<TreeNode*> treeQueue;

                if (!root)return twoDimVector;
                TreeNode* current = root;
                treeQueue.push(current);
                treeQueue.push(nullptr);
                while (!treeQueue.empty()) {
                    current = treeQueue.front();
                    treeQueue.pop();

                    if (current == nullptr) {
                        twoDimVector.push_back(inner);
                        inner.resize(0);
                        if (treeQueue.size() > 0)treeQueue.push(nullptr);
                    }
                    else {
                        inner.push_back(current->val);
                        if (current->left != nullptr) {
                            treeQueue.push(current->left);
                        }
                        if (current->right != nullptr) {
                            treeQueue.push(current->right);
                        }
                    }
                }
                return twoDimVector;
            }

        };
   
