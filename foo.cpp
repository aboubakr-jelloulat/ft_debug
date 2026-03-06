#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// [-10,-3,0,5,9]

class Solution {
public:

    TreeNode* build(vector<int>& nums, int left, int right)
    {
        if (left > right)
            return nullptr;

        int mid = left + (right - left) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = build(nums, left, mid - 1);
        root->right = build(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return build(nums, 0, nums.size() - 1);
    }
};

// inorder print to verify BST
void inorder(TreeNode* root)
{
    if (!root)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    vector<int> nums = {-10, -3, 0, 5, 9};

    Solution sol;
    TreeNode* root = sol.sortedArrayToBST(nums);

    cout << "Inorder traversal of the BST:\n";
    inorder(root);

    cout << endl;

    return 0;
}