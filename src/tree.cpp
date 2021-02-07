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
    std::ifstream fileToRead; // File to read strings from
    std::string buffer;       // String buffer to hold data read from file
    node* root = NULL;        // Root node of the Binary Search Tree

    // Open file to read
    try {
        fileToRead.open(filename);
        std::cout << "-> " << filename << " opened for reading!" << std::endl;
    } catch (int e) {
        throw 1;
    }

    // Read from file and build nodes
    try {
        while (fileToRead >> buffer) {
            root = insertNode(buffer, root); // Use each 'buffer' instance to build a node
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

void printInorder(node* node, std::ofstream& outputFile, int level = 0) {
    if (node == NULL) return;

    std::string entriesString = buildEntriesString(node->entries);

    printInorder(node->left, outputFile, level + 1);
    std::cout << std::string(level * 2, ' ') << level << ": " << node->base << "- " << entriesString << std::endl;
    outputFile << std::string(level * 2, ' ') << level << ": " << node->base << "- " << entriesString << std::endl;
    printInorder(node->right, outputFile, level + 1);
}

void printPostorder(node* node, std::ofstream& outputFile, int level = 0) {
    if (node == NULL) return;

    std::string entriesString = buildEntriesString(node->entries);

    printPostorder(node->left, outputFile, level + 1);
    printPostorder(node->right, outputFile, level + 1);
    std::cout << std::string(level * 2, ' ') << level << ": " << node->base << "- " << entriesString << std::endl;
    outputFile << std::string(level * 2, ' ') << level << ": " << node->base << "- " << entriesString << std::endl;
}

void printPreorder(node* node, std::ofstream& outputFile, int level = 0) {
    if (node == NULL) return;

    std::string entriesString = buildEntriesString(node->entries);

    std::cout << std::string(level * 2, ' ') << level << ": " << node->base << "- " << entriesString << std::endl;
    outputFile << std::string(level * 2, ' ') << level << ": " << node->base << "- " << entriesString << std::endl;
    printPreorder(node->left, outputFile, level + 1);
    printPreorder(node->right, outputFile, level + 1);
}

void processInorder(node* node, std::string fileName) {
    std::string outputFileName = fileName + ".inorder";
    std::ofstream file(outputFileName);

    printInorder(node, file);

    file.close();
}

void processPostorder(node* node, std::string fileName) {
    std::string outputFileName = fileName + ".postorder";
    std::ofstream file(outputFileName);

    printPostorder(node, file);

    file.close();
}

void processPreorder(node* node, std::string fileName) {
    std::string outputFileName = fileName + ".preorder";
    std::ofstream file(outputFileName);

    printPreorder(node, file);

    file.close();
}
