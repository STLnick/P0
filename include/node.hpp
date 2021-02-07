#ifndef NODE_HPP
#define NODE_HPP

#include <vector>

struct node {
    std::string base;
    std::vector<std::string> entries;
    node* left;
    node* right;
};

#endif // !NODE_HPP