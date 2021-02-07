#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include "node.hpp"
#include "parseCommandLineOpts.hpp"
#include "printPreorder.hpp"
#include "printInorder.hpp"
#include "printPostorder.hpp"
#include "tree.hpp"

int parseCommandLineOpts(int argc, char **argv);

int main(int argc, char **argv) {
    std::fstream myFile;
    std::string buffer;
    std::string fileNameToRead;

    // Parse Command Line Options
    if (parseCommandLineOpts(argc, argv) == -1) {
        std::cout << "Invalid Usage - Terminating" << std::endl;
        return -1;
    }

    // Read in input if needed and set the filename to be read depending on arguments
    if (argc == 1) /*  ./P0 or ./P0 < filename  */ {
        std::fstream tempFile;
        // Open temp file to hold user input or redirected file input
        try {
            tempFile.open("temp.txt");
            std::cout << "-> File opened for writing!" << std::endl;
        }
        catch (int e) {
            std::cerr << "Failed to open the temp file for writing!" << std::endl;
            return -1;
        }

        std::cout
                << "Preparing to read in input (if using keyboard type "
                   "'ctrl + d' on *nix systems and 'ctrl + z' for Windows to finish)"
                << std::endl;

        // While there is input from user/file write it to new file
        try {
            while (std::cin >> buffer) {
                tempFile << buffer << std::endl;
            }
        } catch (int e) {
            std::cerr << "Error while reading from buffer and writing to file!" << std::endl;
        }

        tempFile.close();

        fileNameToRead = "temp.txt";
    } else if (argc == 2) {
        int i;
        // NOTE: Just for testing purposes - remove before submission!
        for (i = 0; i < argc; i++) {
            std::cout << "arg" << i << " -> " << argv[i] << std::endl;
        }
        fileNameToRead = argv[1];
        //fileNameToRead += ".sp2020";
    } else {
        std::cout << "Incorrect invocation of program! Try again or execute './P0 -h' to view the help info"
                  << std::endl;
        return -1;
    }

    // Open file to read
    try {
        myFile.open(fileNameToRead, std::fstream::in);
        std::cout << "-> File opened for reading!" << std::endl;
    }
    catch (int e) {
        std::cerr << "Failed to open the file for reading!" << std::endl;
        return -1;
    }

    // Read from file
    std::cout << "- - - - - " << fileNameToRead << " - - - - -" << std::endl;
    while (myFile >> buffer) {
        std::cout << buffer << std::endl;
    }
    std::cout << "- - - - - - - - - - - - - - - - -" << std::endl;

    /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
    /* !! The 3 Main Tasks as described by Mark in Project description */
    /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

    /* 1. Process Command Arguments */
    // Here in main()...

    /* 2. Build the Tree */
    // TODO - outsideFunction()

    /* 3. Traverse the tree 3 different ways */
    // TODO - outsideFunction() (x3)




//    node_t *root = buildTree(file);
//    printPreorder(root);
//    printInorder(root);
//    printPostorder(root);
    myFile.close();
    return 0;
}

// TODO: Build out these required functions per Project Requirements
/*
 * buildTree()
 * printInorder()   -> Process Left - Process Root - Process Right
 * printPreorder()  -> Process root - Process children left to right
 * printPostorder() -> Process children left to right - Process root
 */

// FROM MARK IN THE PROJECT DESCRIPTION
//Ideas for printing tree with indentations
//static void printPreorder(nodeType *rootP,int level) {
//    if (rootP == NULL) return;
//    printf("%*c%d:%-9s ", level * 2, ' ', level, NodeId.info); // assume some info printed as string
//    printf("\n");
//    printPreorder(rootP->left, level + 1);
//    printPreorder(rootP->right, level + 1);
//}