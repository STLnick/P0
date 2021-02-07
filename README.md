# Compilers - P0

**Version Control**:
GitHub repo: https://github.com/STLnick/P0

**To run the program**:
First run 'make' in the root of the project to build 'P0'.
The executable is truly built and placed in `/bin`, however, a symlink will be available in the root directory too.

**Run command example**:

./P0 -> read from the keyboard until simulated EOF

./P0 < [ _file_ ] -> redirect from _file_ until simulated EOF, this tests keyboard input

./P0 [ _file_ ] -> read from _file_.sp2020

./P0 -h -> help

**What Works**:
- Takes command line arguments, parses correctly and errors when appropriate
- Builds the binary search tree
- Performs the three traversals
- Outputs to console and to three files

**What Doesn't Work**:
[Everything works as far as my testing indicated]

**Commit Log**:
