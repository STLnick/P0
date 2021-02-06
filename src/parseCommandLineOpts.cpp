#include <iostream>
#include <unistd.h>
#include "showHelp.hpp"

int parseCommandLineOpts(int argc, char **argv)
{
  int opt;
  bool shouldTerminate;

  opterr = 0;

  while ((opt = getopt(argc, argv, "h")) != -1)
  {
    switch (opt)
    {
    case 'h':
      showHelp();
      shouldTerminate = true;
      break;
    case '?':
      std::cerr << "Unknown option: '" << char(optopt) << "'!" << std::endl;
      shouldTerminate = true;
      break;
    }
  }
  return shouldTerminate ? -1 : 0;
}