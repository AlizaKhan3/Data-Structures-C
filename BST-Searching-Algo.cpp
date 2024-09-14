#include <iostream>
#include <cstdlib> // for malloc

struct Node {
    struct Node* left;
    int data;
    struct Node* right;
};

// Creating a new node for the Binary Search Tree (BST)
struct Node* creatingBinarySearchTree(int value){
    struct Node* root;
    root = (struct Node*)malloc(sizeof(struct Node));
    root->data = value;
    root->left = NULL;
    root->right = NULL;
    return root;
}

// Inorder traversal to print the tree
void inOrder(struct Node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Search for a value in the BST
struct Node* searchInBST(struct Node* root, int valueToSearch){
    if(root == NULL){
        std::cout << "No values found..." << std::endl;
        return NULL;
    }

    if(valueToSearch == root->data){
        return root;  // Return the found node
    }
    else if(valueToSearch < root->data){
        return searchInBST(root->left, valueToSearch);  // Recursive call on left subtree
    }
    else{
        return searchInBST(root->right, valueToSearch); // Recursive call on right subtree
    }
}

int main(){
    // Create nodes of the BST
    struct Node* root = creatingBinarySearchTree(10);
    struct Node* root1 = creatingBinarySearchTree(2);
    struct Node* root2 = creatingBinarySearchTree(23);
    struct Node* root3 = creatingBinarySearchTree(4);
    struct Node* root4 = creatingBinarySearchTree(50);
    struct Node* root5 = creatingBinarySearchTree(77);
    
    // Linking left and right nodes
    root->left = root1;
    root->right = root2;
    root2->left = root3;
    root2->right = root4;
    root1->left = root5;
    
    // Print data of root and children
    std::cout << "Root Node--> " << root->data << std::endl;
    std::cout << "Left Child--> " << root->left->data << std::endl;
    std::cout << "Right Child--> " << root->right->data << std::endl;
    std::cout << "Root1 left Child--> " << root1->left->data << std::endl;
    std::cout << "Root2 right child--> " << root2->right->data << std::endl;
    std::cout << "Root2 left child--> " << root2->left->data << std::endl;
    
    // Perform inorder traversal of the BST
    std::cout << "The Inorder traversal of BST is---> ";
    inOrder(root);
    std::cout << std::endl;

    // Search for a value in the BST
    struct Node * n = searchInBST(root, 23);
    if(n != NULL){
        std::cout << "Found " << n->data << std::endl;
    }
    else{           
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
