class Solution{
  public:
    /*You are required to complete this method*/
    bool checkLeaf(Node*root,int level,int *leafLevel){
        if(root == NULL) return true;
        if(root->left == NULL && root->right==NULL){
            if(*leafLevel == 0){
                *leafLevel = level;
                return true;
            }
            return *leafLevel == level;
        }
        return (checkLeaf(root->left,level+1,leafLevel)&&(checkLeaf(root->right,level+1,leafLevel)));
    } 
    bool check(Node *root)
    {
        int leafLevel=0;
        return checkLeaf(root,0,&leafLevel);
    }
};
