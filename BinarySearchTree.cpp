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

int main() {
  //costructing BST with root nodes
  struct Node * root = createNodesOfBST(1);
  struct Node * root1 = createNodesOfBST(2);
  struct Node * root2 = createNodesOfBST(3);
  
  root->left = root1;
  root->right = root2;
   std::cout << "Root-> " << root->data << std::endl;
  std::cout << "Left-> " << root->left->data << std::endl;
  std::cout<<"Right-> "<< root->right->data<<std::endl;
    return 0;
}
