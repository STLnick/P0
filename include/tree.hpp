#ifndef TREE_HPP
#define TREE_HPP

#include "node.hpp"

node* buildTree(std::string filename);
void processInorder(node* node, std::string fileName);
void processPostorder(node* node, std::string fileName);
void processPreorder(node* node, std::string fileName);

#endif // !TREE_HPP