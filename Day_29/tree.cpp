
class Solution {
public:
    int a = -2147483648; 
    int s(TreeNode* r) 


{




        if (!r) return 0;



      int l = max(0, s(r->left));
             int   rt  = max(  0, s(  r->right)  );
        a = max(a, l + rt + r->val);
  return r->val + max(l, rt);}




    int maxPathSum(TreeNode* root) {
             s(  root  );
        return    a;}};