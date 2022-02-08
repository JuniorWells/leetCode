//Given the root of a binary tree, return the inorder traversal of its nodes' values.

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};


void	helper(struct TreeNode *root, int *arr, int *size)
{
	if (root->left)
		helper(root->left, arr, size);
	arr[(*size)++] = root->val;
	if (root->right)
		helper(root->right, arr, size);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int*	inorderTraversal(struct TreeNode* root, int* returnSize){

	int *ret = malloc(sizeof(int) * 100);
	*returnSize = 0;
	if (root)
		helper(root, ret, returnSize);
	ret = realloc(ret, (*returnSize) * sizeof(int));
	return (ret);
}