#include <iostream>

struct Node{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node* createNodesOfBST(int dataValue){
    struct Node * root;   //pointer to root node
    root = (struct Node * )malloc(sizeof(struct Node)); //allocating heap memory
    root->left = NULL;
    root->right = NULL;
    root->data = dataValue;
    return root;
}

void inOrder(struct Node * root){
    if(root !=  NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void AscendingBst(struct Node * root){
    if(root !=  NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main() {
  //costructing BST with root nodes
  struct Node * root = createNodesOfBST(1);
  struct Node * root1 = createNodesOfBST(2);
  struct Node * root2 = createNodesOfBST(3);
  struct Node * root3 = createNodesOfBST(6);
  struct Node * root4 = createNodesOfBST(9);
  struct Node * root5 = createNodesOfBST(13);

  
  root->left = root1;
  root->right = root2;
  root2->left = root3;
  root2->right = root4;
  root1->left = root5;
  
   std::cout << "Root-> " << root->data << std::endl;
  std::cout << "Left-> " << root->left->data << std::endl;
  std::cout<<"Right-> "<< root->right->data<<std::endl;
  
  inOrder(root);
    return 0;
}
