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
        void sumNumbersUtil(TreeNode *root,vector<string> &vec,string str){
                if(root == NULL) return;
                if(root->left == NULL && root->right == NULL){
                        vec.push_back(str+to_string(root->val));
                        return;
                }
                
                str = str + to_string(root->val);
               
              sumNumbersUtil(root->left,vec,str);
                 sumNumbersUtil(root->right,vec,str);
                str.pop_back();
        }
    int sumNumbers(TreeNode* root) {
        vector<string> vec;
            int output = 0;
            sumNumbersUtil(root,vec,"");
            for(auto ele : vec){
                    output += stoi(ele);
            }
            return output;
    }
};
