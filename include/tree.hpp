#ifndef TREE_HPP
#define TREE_HPP

#include "node.hpp"

node* buildTree(std::string filename);
void printInorder(node* node, int level = 0);
void printPostorder(node* node, int level = 0);
void printPreorder(node* node, int level = 0);


#endif // !TREE_HPP