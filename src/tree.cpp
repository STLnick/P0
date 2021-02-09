#include <algorithm>
#include <iostream>
#include <fstream>
#include "node.hpp"
#include "SSTR.hpp"

node* insertNode(std::string str, node* treeNode) {
    std::string strBase = str.substr(0, 2);

    if(treeNode == NULL) {
        treeNode = new node;
        treeNode->base = strBase;
        treeNode->entries.push_back(str);
        treeNode->left = treeNode->right = NULL;
    } else if (strBase == treeNode->base) {
        // Only push str if it's not in vector already
        if (std::find(treeNode->entries.begin(), treeNode->entries.end(), str.c_str()) == treeNode->entries.end()) {
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
    std::ifstream fileToRead;    // File to read strings from
    std::string buffer;          // String buffer to hold data read from file
    std::string filenameWithExt; // Filename with file extension
    node* root = NULL;           // Root node of the Binary Search Tree
    bool hasContent = false;     // Flag to indicate if file had content

    // Open file to read
    try {
	filenameWithExt = filename + ".sp2020";
        fileToRead.open(filenameWithExt.c_str());
    } catch (std::ifstream::failure e) {
        throw 1;
    }

    // Read from file and build nodes
    try {
        while (fileToRead >> buffer) {
            hasContent = true;
            root = insertNode(buffer, root); // Use each 'buffer' instance (word) to build a node
        }
    } catch (std::ifstream::failure e) {
        throw 3;
    }

    try {
        fileToRead.close();
    } catch (std::ifstream::failure e) {
        throw 4;
    }

    if (!hasContent) throw 2;

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
    std::string formattedOutput = std::string(level * 2, ' ') + SSTR(level) + ": " + node->base + "- " + entriesString + '\n';

    printInorder(node->left, outputFile, level + 1);
    std::cout << formattedOutput;
    try {
        outputFile << formattedOutput;
    } catch (std::ofstream::failure e) {
        throw 5;
    }
    printInorder(node->right, outputFile, level + 1);
}

void printPostorder(node* node, std::ofstream& outputFile, int level = 0) {
    if (node == NULL) return;

    std::string entriesString = buildEntriesString(node->entries);
    std::string formattedOutput = std::string(level * 2, ' ') + SSTR(level) + ": " + node->base + "- " + entriesString + '\n';

    printPostorder(node->left, outputFile, level + 1);
    printPostorder(node->right, outputFile, level + 1);
    std::cout << formattedOutput;
    try {
        outputFile << formattedOutput;
    } catch (std::ofstream::failure e) {
        throw 5;
    }
}

void printPreorder(node* node, std::ofstream& outputFile, int level = 0) {
    if (node == NULL) return;

    std::string entriesString = buildEntriesString(node->entries);
    std::string formattedOutput = std::string(level * 2, ' ') + SSTR(level) + ": " + node->base + "- " + entriesString + '\n';

    std::cout << formattedOutput;
    try {
        outputFile << formattedOutput;
    } catch (std::ofstream::failure e) {
        throw 5;
    }
    printPreorder(node->left, outputFile, level + 1);
    printPreorder(node->right, outputFile, level + 1);
}

void processInorder(node* node, std::string fileName) {
    std::string outputFileName = fileName + ".inorder";
    std::ofstream file;

    try {
        file.open(outputFileName.c_str());
    } catch (std::ofstream::failure e) {
        throw 1;
    }

    printInorder(node, file);

    try {
        file.close();
    } catch (std::ofstream::failure e) {
        throw 4;
    }
}

void processPostorder(node* node, std::string fileName) {
    std::string outputFileName = fileName + ".postorder";
    std::ofstream file;

    try {
        file.open(outputFileName.c_str());
    } catch (std::ofstream::failure e) {
        throw 1;
    }

    printPostorder(node, file);

    try {
        file.close();
    } catch (std::ofstream::failure e) {
        throw 4;
    }
}

void processPreorder(node* node, std::string fileName) {
    std::string outputFileName = fileName + ".preorder";
    std::ofstream file;

    try {
        file.open(outputFileName.c_str());
    } catch (std::ofstream::failure e) {
        throw 1;
    }

    printPreorder(node, file);

    try {
        file.close();
    } catch (std::ofstream::failure e) {
        throw 4;
    }
}
