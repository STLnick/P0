#include <iostream>
#include <fstream>
#include "node.hpp"

node* insertNode(std::string str, node* treeNode) {
    std::string strBase = str.substr(0, 2);

    if(treeNode == NULL) {
        treeNode = new node;
        treeNode->base = strBase;
        treeNode->entries.push_back(str);
        treeNode->left = treeNode->right = NULL;
    } else if (strBase == treeNode->base) {
        // Only push str if it's not in vector already
        if (std::find(treeNode->entries.begin(), treeNode->entries.end(), str) == treeNode->entries.end()) {
            treeNode->entries.push_back(str);
        }
    } else if(strBase < treeNode->base) {
        treeNode->left = insertNode(str, treeNode->left);
    } else if(strBase > treeNode->base) {
        treeNode->right = insertNode(str, treeNode->right);
    }

    return treeNode;
}

node* buildTree(std::string filename) {
    std::fstream fileToRead;
    std::string buffer;
    node* root = NULL;

    // Open file to read
    try {
        fileToRead.open(filename, std::fstream::in);
        std::cout << "-> " << filename << " opened for reading!" << std::endl;
    } catch (int e) {
        throw 1;
    }

    // Read from file and build nodes
    try {
        while (fileToRead >> buffer) {
            // use each 'buffer' instance to build a node
            root = insertNode(buffer, root);
        }

        fileToRead.close();
    } catch (int e) {
        throw 2;
    }

    // Return the root node to the fully build BST
    return root;
}

std::string buildEntriesString(std::vector<std::string> entries) {
    std::string entriesString = "";

    for (std::vector<std::string>::iterator it = entries.begin(); it != entries.end(); ++it) {
        entriesString += *it + ' ';
    }

    return entriesString;
}

void printInorder(node* node, int level = 0) {
    std::cout << "printInorder.cpp - level: " << level << std::endl;

}

void printPostorder(node* node, int level = 0) {
    std::cout << "printPostorder.cpp - level: " << level << std::endl;
}

void printPreorder(node* node, int level = 0) {
    if (node == NULL) return;

    std::string entriesString = buildEntriesString(node->entries);

    printf("%*c%d: ", level * 2, ' ', level);
    std::cout << entriesString << std::endl;

    printPreorder(node->left, level + 1);
    printPreorder(node->right, level + 1);
}