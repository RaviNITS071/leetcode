/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isIdentical(TreeNode *p , TreeNode *q){
        if( p == NULL || q == NULL) return p==q;

        bool isLeftSame = isIdentical(p -> left , q -> left);
        bool isRightSame = isIdentical( p-> right, q -> right);

        return (isLeftSame && isRightSame && p -> val == q -> val);
    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if( root == NULL || subroot == NULL) return root == subroot;

        if(root -> val == subroot -> val && isIdentical (root,subroot)) return true;

        bool checkLeft = isSubtree(root -> left , subroot);
        bool checkRight = isSubtree(root -> right , subroot);

        return checkLeft || checkRight;
    }
};