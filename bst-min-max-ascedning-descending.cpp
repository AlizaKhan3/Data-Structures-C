#include <iostream>
#include <climits>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node * createBST(int data){
    struct node * root;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

void descendingOrderTraversal(struct node * root){
    if(root != NULL){
        descendingOrderTraversal(root->right);
        printf("%d ", root->data);
        descendingOrderTraversal(root->left);
    }
}

void ascendingOrderTraversal(struct node * root){
    if(root != NULL){
        ascendingOrderTraversal(root->left);
        printf("%d ", root->data);
        ascendingOrderTraversal(root->right);
    }
}


int findMinIterative(struct node* root) {
    if (root == NULL) {
        return -1; // return a sentinel value if the tree is empty
    }

    node* current = root;
    while (current->left != NULL) {
        current = current->left;
    }

    return current->data;
}


int findMaxIterative(struct node* root) {
    if (root == NULL) {
        return -1; // return a sentinel value if the tree is empty
    }

    struct node* currentval = root;
    while (currentval ->right != NULL) {
        currentval = currentval->right;
    }

    return currentval->data;
}



int main() {
    struct node * root = createBST(10);
    struct node * root1 = createBST(8);
    struct node * root2 = createBST(34);
    struct node * root3 = createBST(5);
    struct node * root4 = createBST(9);
   
    //linking nodes
    root->left = root1;
    root->right = root2;
    root1->left = root3;
    root1->right = root4;
    
    std::cout<<"Ascending order: ";
    ascendingOrderTraversal(root);
    std::cout<<""<<std::endl;
    
    std::cout<<"Descending order: ";
    descendingOrderTraversal(root);
    std::cout<<""<<std::endl;
    
    int minVal = findMinIterative(root);
    if (minVal != -1) {
        std::cout << "Minimum value: " << minVal << std::endl;
    } else {
        std::cout << "Tree is empty." << std::endl;
    }
  
   int maxVal = findMaxIterative(root);
    if (maxVal != -1) {
        std::cout << "Maximum value: " << maxVal << std::endl;
    } else {
         std::cout << "Tree is empty." << std::endl;
    }
    
    return 0;
}
