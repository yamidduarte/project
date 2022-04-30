private:
    int depth(TreeNode* node)     // let's compute depth of each subtree
    {
        if(node==NULL)  return 0;
        return max(depth(node->left), depth(node->right)) + 1;
    }
public:
    int diameterOfABinaryTree(TreeNode* root)    
	{
        if(root==NULL)  return 0;
        
        int currentDiameter = depth(root->left) + depth(root->right);     // the current diameter thru a node
        
        int leftLongestDiameter = diameterOfABinaryTree(root->left);     // longest diameter in the left subtree
        int rightLongestDiameter = diameterOfABinaryTree(root->right);     // longest diameter in the right subtree
        
        return max({currentDiameter, leftLongestDiameter, rightLongestDiameter});     // max out of the current diameter, max diameter on left and right
    }
};
