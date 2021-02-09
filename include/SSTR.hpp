/*
 *
 * Code taken from Stack Overflow answer regarding a common issue people run
 * into of a certain compiler not recognizing std::to_string. This code
 * is a patch to have a simple function easily available and portable.
 *
 * URL: https://stackoverflow.com/questions/5590381/easiest-way-to-convert-int-to-string-in-c
 *
 */

#ifndef SSTR_HPP
#define SSTR_HPP

#include <sstream>

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

#endif // !SSTR_HPP
