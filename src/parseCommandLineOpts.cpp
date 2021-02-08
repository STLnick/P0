#include <iostream>
#include <unistd.h>
#include "showHelp.hpp"

int parseCommandLineOpts(int argc, char **argv) {
  int opt;
  opterr = 0;

  while ((opt = getopt(argc, argv, "h")) != -1) {
    switch (opt) {
    case 'h':
      showHelp();
      return 1;
    case '?':
      std::cerr << "Unknown option: '" << char(optopt) << "'!" << std::endl;
      return -1;
    }
  }

  return 0;
}