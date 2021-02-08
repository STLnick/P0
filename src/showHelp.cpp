#include <iostream>

void showHelp()
{
  std::cout << "~ ~ ~ ~ ~ [ Compilers -- P0 ] ~ ~ ~ ~ ~" << std::endl
            << "~ ~ ~ ~ ~ [ Tree Traversals ] ~ ~ ~ ~ ~" << std::endl
            << std::endl
            << "The only flag used for this program is the one you already used!" << std::endl
            << "    -h  -> Help" << std::endl
            << std::endl
            << "**Run command structure**:" << std::endl
            << "  ./P0               -> read from the keyboard until simulated EOF" << std::endl
            << "  ./P0 < [ _file_ ]  -> redirect from _file_ until simulated EOF, this tests keyboard input" << std::endl
            << "  ./P0 [ _file_ ]    -> read from _file_.sp2020" << std::endl
            << std::endl
            << "**NOTE** If you invoke P0 like the third and last example ( ./P0 [ _file_ ] )" << std::endl
            << "         then the file must be of extension '.sp2020'." << std::endl
            << "         More specifically, if you specify an extension it MUST BE '.sp2020'" << std::endl
            << "         and if no file extension is specified then P0 will look for [ _file_ ].sp2020" << std::endl
            << std::endl
            << "Examples of valid invocations:" << std::endl
            << "\t./P0 test3.sp2020" << std::endl
            << "\t./P0 test3  (Valid IF there is in fact a file 'test3.sp2020')" << std::endl
            << "Examples of _invalid_ invocations:" << std::endl
            << "\t./P0 test2.txt" << std::endl
            << "\t./P0 test2  (_Invalid_ IF there is NO file 'test2.sp2020')" << std::endl
            << std::endl;
}