#include <iostream>
#include "hello.hpp"
#include "node.hpp"
#include "tree.hpp"

int main(int argc, char **argv)
{
  FILE *fptr = nullptr;
  char buffer[100];
  char fileName[50];
  char str[20];

  if (argc == 1) // ./P0
  {
    strcpy(str, "- Keyboard - ");

    fptr = fopen("temp.txt", "w");
    if (fptr == NULL)
      perror("Error opening file!");
    else
    {
      fputs(str, fptr);
    }

    // NOTE - this while loop reads in until EOF
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
  else if (argc == 2) // ./P0 filename
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

  //fptr = fopen()

  /* Process Command Arguments */
  // Here in main()...

  /* Build the Tree */
  // TODO - outsideFunction()

  /* Traverse the tree 3 different ways */
  // TODO - outsideFunction() (x3)

  hello();

  fclose(fptr);
  return 0;
}