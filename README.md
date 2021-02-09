# Compilers - P0

**Version Control**:
GitHub repo: https://github.com/STLnick/P0

**To run the program**:
First run 'make' in the root of the project to build 'P0'.
The executable `P0` is built and placed in `/bin`.

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
commit 4cab691122870c28237313fc1fddd043bd146d14
Author: nicholas ray <nicholas@hoare7.cs.umsl.edu>
Date:   Mon Feb 8 20:19:52 2021 -0600

    Final changes to function properly on hoare

commit 888f601783659339cc6b588d9c81df21c2afb100
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 21:08:43 2021 -0600

    Improve readability of run command structure section

commit 21cf5cbe36ff98e14d898e800e78cfd65de8f6ae
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 20:44:49 2021 -0600

    Remove testing output

commit 9726baad1221872c4223839c728b2152ef82cc1f
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 20:44:28 2021 -0600

    Fix ungraceful exit from showing help message
    
    
    Change return value when help message shown

commit 3bf6c2aa07da2e7040ed29dcf3d9a61b4712848d
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 20:43:41 2021 -0600

    Show feedback on files generated at end of program

commit 35aa7406532b9f32192654ef0079e53758b532da
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 20:43:14 2021 -0600

    Improve program help message to further explain proper usage

commit 8646ca71cc3a0806439f40f1513795b0e9e09198
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 19:51:22 2021 -0600

    Fix bug with default file name being used

commit 785db28b22922e1668d0aa65ceb40747341d51f1
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 19:31:16 2021 -0600

    Refactor Makefile to much simpler version

commit 7f9f892c1a08f56eaf15d66e6842260abb7b56ba
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 19:30:23 2021 -0600

    Correct braces to match code style of project

commit 7dfda291c01c8b872d62ed6b84e53b320f5bda1d
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 17:05:54 2021 -0600

    Update README

commit 52bc146fdfa746d095ac641e89739c201b3c856e
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 16:09:18 2021 -0600

    Finalize logic for handling file extension of command line argument

commit 37df84dbb4ee705bf1b4e71ae07d5a5b19521364
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 16:08:33 2021 -0600

    Improve error handling and general code format

commit b45a64c8c8764284f43f8c1f3e8ba45482fd73d7
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 16:07:39 2021 -0600

    Move error handling into separate function
    
    
    Include error handling header file

commit 2c1614e3c3712edc28bb5fe04022a51e8921bb50
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 14:43:58 2021 -0600

    Generate output files properly on traversals

commit c502d75c25163f084bf0fb329b410c0dd1e50256
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 13:55:40 2021 -0600

    Remove various debugging code and comments

commit 0461a7702b68d2407bc723cdd34dcd31d4df4be7
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 13:04:48 2021 -0600

    Only push string onto entries vector if not already present

commit 187cb40754aed29c75d5e3bca18cdda7a1d3b718
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 12:58:27 2021 -0600

    Housekeeping - committing code that moved and was committed already

commit a21cf5b305d32fc4b3bcb998dae65c24bd10e822
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 12:57:37 2021 -0600

    Handle file open and file read exceptions

commit 5f54561f2512641943ec8eb5c4f264a10643a681
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 12:56:40 2021 -0600

    Comment out debugging code blocks

commit cc33a742963fbe342807f46680e54f72366f24b6
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 12:55:56 2021 -0600

    Basic setup of functions with just printPreorder implemented

commit ef582b48dfe6a700d7bd23a8c83e75742602a42b
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 12:55:22 2021 -0600

    Create insert node function - need to prevent duplicates still

commit 1760737bfb131db3b237369a929c9646c5ff18e5
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 12:54:35 2021 -0600

    Send only the filename to function to build the tree

commit 8ed9552f83615e6f1c498e2ebead5f0b01af8ac7
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 11:26:26 2021 -0600

    Define structure of tree node

commit 1b7e7edcd827904d094e8f9cdcf53f6b391158f7
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 11:26:04 2021 -0600

    Refactor structure of tree logic to match project description

commit 6ff69fa43bd7b6e3cf84bc1d1ed9f343f20edfa7
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 09:50:59 2021 -0600

    Add debugging messages

commit 67b7fc6f8d343b33007c28b918385b889c6dba64
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 09:50:35 2021 -0600

    Move tree functions into tree.cpp and only include tree into main

commit c947525436d3c315b7030df4220241258a94b358
Author: Nick <nickrray@gmail.com>
Date:   Sun Feb 7 09:49:55 2021 -0600

    Change comments in header files to reflect .hpp file

commit 7e112368f9e9339101ad27632abce447c67ddd8e
Author: Nick <nickrray@gmail.com>
Date:   Sat Feb 6 21:35:09 2021 -0600

    Quick README update with basic run command examples

commit d2a6d3081b515accc4fe23b17e1eec0bdcde6b62
Author: Nick <nickrray@gmail.com>
Date:   Sat Feb 6 21:34:50 2021 -0600

    Take keyboard or redirect input or a filename and print contents

commit 37a8e6aa6d8e88cc79ace9ec9c49d79b61a54418
Author: Nick <nickrray@gmail.com>
Date:   Sat Feb 6 21:33:32 2021 -0600

    Include new starter header files from required functions

commit c6304ab373b240b99d4d903da7c2e05da70daa3c
Author: Nick <nickrray@gmail.com>
Date:   Sat Feb 6 21:32:05 2021 -0600

    Fix unintentional return of -1 from option parser

commit 5991b0a45568b451f5d3aae5eaf417c21662a784
Author: Nick <nickrray@gmail.com>
Date:   Sat Feb 6 21:18:15 2021 -0600

    Starter files for known required functions for tree traversals

commit 33016b0b94dd80f8fe957c9648123f480e6ab61b
Author: Nick <nickrray@gmail.com>
Date:   Sat Feb 6 21:01:14 2021 -0600

    Remove tester files

commit 7c78ca4733a1ecba1545190d6333e1ef975d07f3
Author: Nick <nickrray@gmail.com>
Date:   Fri Feb 5 23:13:32 2021 -0600

    Parse command line opts and show help message with -h flag

commit ef55a5e63a810e8c688b37b50980191933acc4a1
Author: Nick <nickrray@gmail.com>
Date:   Fri Feb 5 22:30:11 2021 -0600

    Wire up node and tree skeleton files that will be needed

commit 77d3243f20eea2f596b4a19c9e529c783d81f12e
Author: Nick <nickrray@gmail.com>
Date:   Fri Feb 5 22:29:30 2021 -0600

    Basic setup of main, one header file, and comment in basic next steps
    
    
    Add basic header file

commit 49a6a8db691b049460d8998ae322e3339e8e697c
Author: Nick <nickrray@gmail.com>
Date:   Fri Feb 5 22:27:54 2021 -0600

    Change executable name when built

commit 726aa7296f00764312fcf0d08433014e300bdcfb
Author: Nick <nickrray@gmail.com>
Date:   Fri Feb 5 22:27:28 2021 -0600

    Add /bin and /build directories to gitignore

commit c62c46c90ff82edd63a0ecebe0d01a830d2a8ce9
Author: Nick <nickrray@gmail.com>
Date:   Fri Feb 5 00:17:20 2021 -0600

    Update README.md

commit c1703a4f827e33b61467d966e6fd61078494eb12
Author: Nick <nickrray@gmail.com>
Date:   Fri Feb 5 00:16:15 2021 -0600

    Update README.md

commit c9022867d810de3a7982b5b8901ead59f2d51620
Author: Nick <nickrray@gmail.com>
Date:   Fri Feb 5 00:05:59 2021 -0600

    Initial commit
