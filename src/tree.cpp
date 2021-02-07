#include <iostream>
#include "node.hpp"

node* insertNode(std::string str, node* treeNode) {
    std::string strBase = str.substr(0, 2);

    // TODO: IF str already exists in 'entries' do nothing!!!

    if(treeNode == NULL) {
        treeNode = new node;
        treeNode->base = strBase;
        treeNode->entries.push_back(str);
        treeNode->left = treeNode->right = NULL;
    } else if (strBase == treeNode->base) {
        treeNode->entries.push_back(str);
    } else if(strBase < treeNode->base) {
        treeNode->left = insertNode(str, treeNode->left);
    } else if(strBase > treeNode->base) {
        treeNode->right = insertNode(str, treeNode->right);
    }

    return treeNode;
}

    // TODO: Using all the input from the file we will build the tree

    // TODO: For each 'string' in 'file_input' tree.insert()

    // TODO: Return the root node to the fully build BST

}

node* buildTree(std::fstream *file) {
    std::cout << "buildTree() fired!" << std::endl;
    node* root;
    root.base = "BASE";
    return root;
}

void printInorder(node* tree)
{
    std::cout << "printInorder.cpp" << std::endl;
}

void printPostorder(node* tree)
{
    std::cout << "printPostorder.cpp" << std::endl;
}

void printPreorder(node* tree)
{
    std::cout << "printPreorder.cpp" << std::endl;
}