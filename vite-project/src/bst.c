# Query: #include <stdio.h>\n#include <stdlib.h>\n\n// Define the structure of a node\nstruct Node {\n    int data;\n    struct Node* left;\n    struct Node* right;\n};\n\n// Create a new node\nstruct Node* createNode(int data) {\n    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));\n    newNode->data = data;\n    newNode->left = NULL;\n    newNode->right = NULL;\n    return newNode;\n}\n\n// Insert a node into BST\nstruct Node* insert(struct Node* root, int data) {\n    if (root == NULL) {\n        return createNode(data);\n    }\n\n    if (data < root->data) {\n        root->left = insert(root->left, data);\n    } else if (data > root->data) {\n        root->right = insert(root->right, data);\n    }\n\n    return root;\n}
# ContextLines: 1


