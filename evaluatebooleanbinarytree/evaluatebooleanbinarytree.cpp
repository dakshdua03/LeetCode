struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if (root->left == nullptr && root->right == nullptr) {
            return root->val;
        }
        bool a = evaluateTree(root->left);
        bool b = evaluateTree(root->right);

        if (root->val == 2) { // Assuming 2 means logical OR
            return a || b;
        } else { // Assuming any other value (e.g., 3) means logical AND
            return a && b;
        }
    }
};
