[The website I used for the writeup](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm)

# Printf
This project required you to recreate the founction printf.

Recreating Prinft Function:

	int printf(const char *format, ...)

Parameters:

- **format** − This is the string that contains the text to be written to stdout. It can optionally contain embedded format tags
- (that are replaced by the values specified in subsequent additional arguments and formatted as requested.) 

- Format tags prototype is %**[flags][width]**[.precision]**[length]specifier**.
- The ones I need to implement are:
**%[flags][width]specifier**

## Specifiers to implement:
cspdiuxX%
- **%c** Prints a single character.
- **%s** Prints a string (as defined by the common C convention).
- **%p** The void * pointer argument has to be printed in hexadecimal format.
- **%d** Prints a decimal (base 10) number.
- **%i** Prints an integer in base 10.
- **%u** Prints an unsigned decimal (base 10) number.
- **%x** Prints a number in hexadecimal (base 16) lowercase format.
- **%X** Prints a number in hexadecimal (base 16) uppercase format.
- **%%** Prints a percent sign.
