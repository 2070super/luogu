class Solution {
public:
    string tree2str(TreeNode* root) {
        string str="";
       if(root==nullptr)
       {
           return str;
       } 
       str+=to_string(root->val);
        //左边不为空或者左边为空右边不为空，左边保留
        if(root->left||root->right)
        {
            str+="(";
            str+=tree2str(root->left);
            str+=")";
        }//右边为空
        if(root->right)
        {
            str+="(";
            str+=tree2str(root->right);
            str+=")";
        }
        
        
        return str;
    }
};