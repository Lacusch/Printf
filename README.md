[The website I used for the writeup](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm)

# Printf
Recreating Prinft Function

	int printf(const char *format, ...)

Parameters

- **format** − This is the string that contains the text to be written to stdout. It can optionally contain embedded format tags
- (that are replaced by the values specified in subsequent additional arguments and formatted as requested.) 

- Format tags prototype is %**[flags][width]**[.precision]**[length]specifier**.
- The ones I need to implement are:
**%[flags][width]specifier**

## Specifiers to implement
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

## Bonus list (don't need to do all)

### Flags (any combination):
- **'-'** Left-justify within the given field width; Right justification is the default 
- **0** Left-pads the number with zeroes (0) instead of spaces, where padding is specified

### Width minimum
- **(number)** Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.
### Flags (all):
- **\#** Used with x or X specifiers the value is preceded with 0x or 0X respectively
(for values different other than zero.)
- **\+** Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers.
(By default, only negative numbers are preceded with a -ve sign.)
- **' '(space)** If no sign is going to be written, a blank space is inserted before the value.

## Todo
1. We print each character to std until we get to a %
2. It (required) implement the flags, width, length and specifier, then repeat till the end of the stirng.