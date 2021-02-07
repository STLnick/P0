#include <iostream>
#include "node.hpp"

void tree() {

    std::cout << "tree.cpp" << std::endl;

    // TODO: Start with the tree root

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