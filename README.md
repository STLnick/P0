# Compilers - P0

**Version Control**:
GitHub repo: https://github.com/STLnick/P0

**To run the program**:
First run 'make' in the root of the project to build 'P0'.
The executable is truly built and placed in `/bin`, however, a symlink will be available in the root directory too.

**Run command structure**:

> In each case `[file]` will be read in 'word by word' (whitespaces separate what's read in).

> `[file]` _must have the extension of_ `.sp2020`.
> - for example `test1.sp2020`, `text.sp2020`, `whatever.sp2020`

`./P0` 
- read from the keyboard until simulated EOF (Command to type to simulate EOF -> *nix: ctrl+d, windows: ctrl+z)

`./P0 < [file]`
- redirect from `[file]` until EOF

`./P0 [file]` or `./P0 [file].sp2020`
- read from `[file].sp2020`

`./P0 -h`
- help

---

**What Works**:
- Takes command line arguments, parses correctly and errors when appropriate
- Provides meaningful error messages
- Builds the binary search tree
- Performs the preorder, inorder, and postorder traversals
- Outputs to console and to three files

**What Doesn't Work**:
[Everything works as far as my testing indicated]

---

**Commit Log**:
