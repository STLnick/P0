# C++ Project Template
It is considered "good form" to separate different pieces of a project such as the source and executable files into their own directories.  While not every project will use each of these directories, every project should use at least some of them.  A properly setup project will be easier to maintain and diagnose.

Makefile is a generic Makefile found on https://github.com/mbcrawfo/GenericMakefile, by Michael Crawford.  License for Makefile is MIT license as well, at least at time of download.

## Directory Structure

`<project-name>/bin`     -> Compiler will put executable files in this directory - there is also a symlink at the root level

`<project-name>/include` -> Files that you include (header files) should be in this directory

`<project-name>/lib`     -> Compiled library files go into this directory

`<project-name>/src`     -> Source code files go in this directory

## Compiling

This project container is set to work correctly with the provided Makefile.  To compile, providing your files are in the necessary places (header files in the 'include' directory, etc.) simply typing ```make``` at the commandline will cause the project to compile.  Note that we use the clang++ compiler as the default, though g++ would work as well.  The authors prefer clang++ for the error messages it produces.

## Notes

If you receive a message like the following:

```
Creating directories
usage: mkdir [-pv] [-m mode] directory ...
make: *** [dirs] Error 64
```

it means that your ```src``` directory is empty.  You have likely included all files in the ```include``` directory instead.
