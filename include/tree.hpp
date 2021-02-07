#ifndef TREE_HPP
#define TREE_HPP

#include "node.hpp"

node* buildTree(std::string filename);
void printInorder(node* node, int level = 0);
void printInorder(node* tree);
void printPostorder(node* tree);
void printPreorder(node* tree);


#endif // !TREE_HPP