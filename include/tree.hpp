#ifndef TREE_HPP
#define TREE_HPP

#include "node.hpp"

void tree();
node* buildTree(std::fstream *file);
void printInorder(node* tree);
void printPostorder(node* tree);
void printPreorder(node* tree);


#endif // !TREE_HPP