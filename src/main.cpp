#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include "node.hpp"
#include "parseCommandLineOpts.hpp"
#include "tree.hpp"

int main(int argc, char **argv) {
    std::string buffer;
    std::string fileNameToRead;

    /* 1. Process Command Arguments */
    // Parse Command Line Options
    if (parseCommandLineOpts(argc, argv) == -1) {
        std::cout << "Invalid Usage - Terminating" << std::endl;
        return -1;
    }

    // Read in input if needed and set the filename to be read depending on arguments
    /*  ./P0 or ./P0 < filename  */
    if (argc == 1) {
        std::ofstream tempFile;
        // Open temp file to hold user input or redirected file input
        try {
            tempFile.open("output");
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

        fileNameToRead = "output";
    /*  ./P0 filename  */
    } else if (argc == 2) {
        // TODO: Finalize the logic for having the correct file / file extension
        fileNameToRead = argv[1];
        // IF this filename has a '.' -> make sure the extension is sp2020 and just store filename no extension

        // ELSE IF this filename has no extension -> add '.sp2020'

        //fileNameToRead += ".sp2020";
    } else {
        std::cout << "Incorrect invocation of program! Try again or execute './P0 -h' to view the help info"
                  << std::endl;
        return -1;
    }

    /* 2. Build the Tree */
    node *root = NULL;
    try {
        root = buildTree(fileNameToRead);
    } catch (int e) {
        switch (e) {
            case 1:
                std::cerr << "Failed to open the file for reading!" << std::endl;
                break;
            case 2:
                std::cerr << "Failed while trying to read from the file!" << std::endl;
                break;
            default:
                std::cerr << "Error Occurred - unprocessed exception thrown!" << std::endl;
        }
    }


    /* 3. Traverse the tree 3 different ways */
    std::cout << std::endl << "- - - Preorder - - -" << std::endl;
    processPreorder(root, fileNameToRead);

    std::cout << std::endl << "- - - Inorder - - -" << std::endl;
    processInorder(root, fileNameToRead);

    std::cout << std::endl << "- - - Postorder - - -" << std::endl;
    processPostorder(root, fileNameToRead);

    return 0;
}
