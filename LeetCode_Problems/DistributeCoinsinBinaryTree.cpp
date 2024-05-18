// problem link
// https://leetcode.com/problems/distribute-coins-in-binary-tree/description/?envType=daily-question&envId=2024-05-18

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
int count = 0;
    int it(TreeNode* root){
        if(!root){
            return 0;
        }

        int left_val = it(root->left);
        int right_val = it(root->right);

        count += abs(left_val) + abs(right_val);

        return root->val-1 + left_val + right_val;
    }


    int distributeCoins(TreeNode* root) {
        it(root);
        return count;
    }
};
