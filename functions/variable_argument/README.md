There are three routines declared in the header file stdarg.h that enable you to write
functions that take a variable number of arguments. They are va_start(), va_arg(), and
va_end().
Also included in stdarg.h is a data type, va_list, which defines an array type suitable
for containing data items needed by va_start(), va_arg(), and va_end().
To initialize a given array that is needed by va_arg() and va_end(), you have to use the
va_start() macro routine before any arguments are processed.
The syntax for the va_start() macro is
#include <stdarg.h>
void va_start(va_list ap, lastfix);
Here ap is the name of the array that is about to be initialized by the va_start() macro
routine. lastfix should be the argument before the ellipsis (...) in the function declrationa
