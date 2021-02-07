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

int main(int argc, char **argv)
{
  FILE *fptr = nullptr;
  char buffer[100];
  char fileName[50];
  char str[20];

  if (parseCommandLineOpts(argc, argv) == -1)
    return -1;

  if (argc == 1) /*  NOTE - ./P0 or ./P0 < filename  */
  {
    strcpy(str, "- Keyboard - ");

    fptr = fopen("temp.txt", "w");
    if (fptr == NULL)
      perror("Error opening file!");
    else
    {
      fputs(str, fptr);
    }

    int cnt = 0;
    while (std::cin >> buffer)
    {
      // if there is file input!
      std::cout << cnt << " " << buffer;
      cnt++;
    }

    // TODO - Read in input from keyboard until simulated EOF

    // TODO - Write all user input to file

    // TODO - Point file pointer at newly created file

    strcpy(fileName, "temp.txt");
    fclose(fptr);
  }
  else if (argc == 2) /*  ./P0 filename  */
  {
    int i = 0;
    for (; i < argc; i++)
    {
      std::cout << "arg" << i << " -> " << argv[i] << std::endl;
    }
    //strcpy(fileName, "temp.txt");
  }

  // TODO - If a file argument was provided then point file pointer at that instead - rest of code is same

  std::cout << str << std::endl;

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