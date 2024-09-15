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


void insertValueInBST(struct Node* root, int value) {
    struct Node* prev = NULL;

    // Traverse the tree to find the correct position for the new value
    while (root != NULL) {
        prev = root;
        if (value == root->data) {
            // If value already exists, return without inserting it
            printf("The value %d is already in the tree\n", value);
            return;
        } else if (value < root->data) {
            root = root->left;
        } else {
            root = root->right;
        }
    }

    // Now root is NULL, and prev is the last valid node
    struct Node* newNode = creatingBinarySearchTree(value);
    if (value < prev->data) {
        prev->left = newNode;
    } else {
        prev->right = newNode;
    }
}

int main() {
    // Create nodes of the BST
    struct Node* root = creatingBinarySearchTree(10);
    struct Node* root1 = creatingBinarySearchTree(2);
    struct Node* root2 = creatingBinarySearchTree(23);
    struct Node* ro ot3 = creatingBinarySearchTree(4);
    struct Node* root4 = creatingBinarySearchTree(50);
    struct Node* root5 = creatingBinarySearchTree(77);
    
    // Linking left and right nodes
    root->left = root1;
    root->right = root2;
    root2->left = root3;
    root2->right = root4;
    root1->left = root5;
    
    // Calling insertValueInBST to insert new values into the tree
    insertValueInBST(root, 1);  // Insert 1
    insertValueInBST(root, 77); // Attempt to insert duplicate 77 (this should print a message and do nothing)
    insertValueInBST(root, 15); // Insert 15
    
    // Verifying the new node insertions
    std::cout << "New leftmost node: " << root->left->left->data << std::endl; // should print 1

    return 0;
}
