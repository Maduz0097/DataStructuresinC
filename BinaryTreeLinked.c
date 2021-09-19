#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char TreeEntry;
typedef struct treenode{
TreeEntry entry;
treenode *left;
treenode *right;
}TreeNode;

void CreateTree(TreeNode **root)
{
    *root = NULL;
    
}
bool TreeEmpty(TreeNode *root)
{
    return(root == NULL);
}
void preorder(TreeNode *root,void(*visit)(TreeEntry x))
{
    if(root){
        visit(root->entry);
        preorder(root->left,visit);
        preorder(root->right,visit);
    }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
