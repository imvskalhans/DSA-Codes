class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int level = 1; // Initialize the level counter
        int maxLevel = 1; // Initialize the variable to store the level with the maximum sum
        int maxSum = root->val; // Initialize the maximum sum with the value of the root node

        // Perform level order traversal using a queue
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int sum = 0; // Variable to store the sum of values at the current level

            for (int i = 0; i < size; i++) 
            {
                TreeNode* temp = q.front();
                q.pop();

                sum += temp->val;

                if (temp->left) 
                {
                    q.push(temp->left);
                }
                if (temp->right) 
                {
                    q.push(temp->right);
                }
            }

            // Check if the current level has a greater sum
            if (sum > maxSum) 
            {
                maxSum = sum;
                maxLevel = level;
            }

            level++; // Increment the level counter
        }

        return maxLevel;
    }
};
