#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNodesOfBST(int data){
    struct node *root;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

struct node * insertBST(struct node *root, int data){
    if(root == NULL){
        return createNodesOfBST(data);
    }
    if(data < root->data){
        root->left = insertBST(root->left, data);
    }
    else if(data > root->data){
        root->right = insertBST( root->right, data);
    }
    return root;
}

void inorderTraversal(struct node *root){
    if(root != NULL){
       inorderTraversal(root->left);
       cout<< root->data<<" ";
       inorderTraversal(root->right);
    }
}

void preOrder(struct node *root){
    if(root != NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root){
    if(root !=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

// struct node* deleteNode(node* root, int key) {
//     // Base case: If the tree is empty
//     if (root == NULL) return root;

//     // Recursively find the node to be deleted
//     if (key < root->data) {
//         root->left = deleteNode(root->left, key);
//     } else if (key > root->data) {
//         root->right = deleteNode(root->right, key);
//     } else {
//         // Node with only one child or no child
//         if (root->left == NULL) {
//             node* temp = root->right;
//             delete root;
//             return temp;
//         } else if (root->right == NULL) {
//             node* temp = root->left;
//             delete root;
//             return temp;
//         }

//         // Node with two children: Get the inorder successor
//         node* temp = minValueNode(root->right);

//         // Copy the inorder successor's content to this node
//         root->data = temp->data;
//         // Delete the inorder successor
//         root->right = deleteNode(root->right, temp->data);
//     }
//     return root;
// }

// node* minValueNode(node* node) {
//     node* current = node;
//     // Loop to find the leftmost leaf
//     while (current && current->left != NULL)
//         current = current->left;

//     return current;
// }

int findMin(struct node *root){
    if(root == NULL){
        cout<<"Tree is Empty! No Min Value exist";
    }
    struct node *current = root;
    while(current->left !=NULL){
        current = current->left;
    }
    return current->data;
}

int findMax(struct node * root){
    if(root == NULL){
        cout<<"Empty tree, NO maxValue exist!";
    }
    struct node *current = root;
    while(current->right !=NULL){
        current = current ->right;
    }
    return current->data;
}

struct node *deleteNode(struct node *root, int data){
    //empty bst no root node
    if(root == NULL){
        cout<<"Empty tree, NO maxValue exist!";
        return NULL;
    }
    //traverse the tree for the side where the node is present to be deleted
    if(data < root->data){
        root->left = deleteNode(root->left, data);
    }
    else if(data > root->data){
        root->right = deleteNode(root->right, data);
    }
    else{
        //Case: 01: Node having no Childrens
        if( root->right == NULL && root->left == NULL){
            delete root;
            return NULL;
        }
        //Case: 02: Node having one child (either on Right or on Left)
        else if(root->right == NULL){
            struct node *temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL){
            struct node *temp = root->right;
            delete root;
            return temp;
        }
         else {
            // Finding min value in right subtree of root node
            // int minValue = findMin(root->right);
            // // Replacin root data jo min value mili usse
            // root->data = minValue;
            // // Delete the node that had the minimum value
            // root->right = deleteNode(root->right, minValue);
              //min value find horahi right subtree mein
          int minValue = findMin(root->right);
          root->data = minValue;
          
          root->right = deleteNode(root->right, minValue);
        }
    }
    return root;
}

void descendingOrderTraversal(struct node * root){
    if(root != NULL){
        descendingOrderTraversal(root->right);
        printf("%d ", root->data);
        descendingOrderTraversal(root->left);
    }
}

// void ascendingOrderTraversal_InOrder(struct node * root){
//     if(root != NULL){
//         ascendingOrderTraversal(root->left);
//         cout<<root->data<< " ";
//         ascendingOrderTraversal(root->right);
//     }
// }


int main() {
    // struct node *root = createNodesOfBST(2);
    // struct node *root2 = createNodesOfBST(9);
    // struct node *root3 = createNodesOfBST(12);
    
    // root->left = root2;
    // root->right = root3;
    
    // cout<<"Root-> "<<root->data <<endl;
    // cout<<"Roots Left-> "<<root->left->data<<endl;
    // cout<<"Roots Right-> "<<root->right->data<<end;
    // struct node *root = NULL;  // Initialize root to NULL
    struct node *root = insertBST(root, 21);
    insertBST(root, 20);
    insertBST(root, 3);
    insertBST(root, 67);
    insertBST(root, 45);
    insertBST(root, 7);
    insertBST(root, 15);
    insertBST(root, 10);
    insertBST(root, 13);
    cout<<"In Order traversal is: "; 
    inorderTraversal(root);
    cout<<endl;

// cout<<" Pre Order traversal is: ";
// preOrder(root);
// cout<<endl;

    cout<<" Post Order traversal is: ";
    postOrder(root);
    cout<<endl;
    root = deleteNode(root, 21);
    cout<<" Pre Order traversal is: ";
    preOrder(root);
    cout<<endl;
    cout<<"In Order traversal after deletion is: ";
    inorderTraversal(root);
    cout<<endl;

    int minValue = findMin(root);
    cout<<"The Minimum Value is: "<<minValue;
    cout<<endl;

    int maxValue = findMax(root);
    cout<<"The Maximum Value is: "<<maxValue;
    cout<<endl;
    cout<<"The Descending Order is: ";
    descendingOrderTraversal(root);
    return 0;
}
