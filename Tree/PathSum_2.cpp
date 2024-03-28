class Solution {
public:
    void hasPathSum(TreeNode* root, int &targetSum,int sum, vector<int> &temp, vector<vector<int>> &ans){

        if(root == NULL) return;
        sum += root->val;
        temp.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                ans.push_back(temp);
            }
        }

        hasPathSum(root->left, targetSum,sum, temp, ans);
        hasPathSum(root->right, targetSum,sum, temp, ans);
        temp.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<int> temp;
        vector<vector<int>> ans;
        int sum = 0;
        hasPathSum(root, targetSum,sum , temp, ans);
        return ans;
        
    }
};