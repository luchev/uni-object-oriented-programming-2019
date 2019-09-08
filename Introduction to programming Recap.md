# Introduction to Programming Recap

## Topics

### Memory - Array of binary digits (bits)

1. 8 bits = 1 byte
2. When we request memory from the OS we get at least one or more bytes. We cannot reserve 1 bit
3. Each memory block has an address by which we reference it

### Numeral Systems

1. Binary - `{0, 1}`
2. Decimal - `{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}`
3. Hex - `{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F}`. Usually the number is preceded by 0x
4. Binary to Hex and vice versa? Why is it easy? - Because each four bits represent one hex digit

### High level languages vs Low level languages and why do we need both

### Primitive (Fundamental) Data Types

1. `int` - Usually 4 bytes, can be 8 on x64 systems
2. `char` - Usually 1 byte
3. `bool` - Usually 1 byte
4. `float` - Usually 4 bytes
5. `double` - Usually 8 bytes
6. `pointer` - Address to object in memory
7. `reference` - Address to object in memory (constant)
8. `void` - Not an actual type. Mainly used as a placeholder for 'no data'. We can use it to say a function returns no data.We cannot initialize void variables. We can use it as a pointer - a generic pointer without saying what data type it is pointing to.
9. Useful resources:
   1. https://en.cppreference.com/w/cpp/language/types
   2. http://www.cplusplus.com/reference/climits/

### Data Type Modifiers

1. `signed` - Positive and Negative
2. `unsigned` - Only positive
3. `short` - Smaller in size (fewer bytes)
4. `long` - Bigger in size (more bytes)

### Arrays

### Variables

### Naming rules - Cannot start with a number or reserved symbols

### Constants

### Variable scope

### Global variables - You have access to them from anywhere

### Enums

### Structs/Classes

1. Fields or Instance variables
2. Methods

### Comments

1. // One line comment
2. /* Multi-line comment */

### Operators

1. Arithmetic `+ - * / %` 
2. Bitwise `^ | & ~ << >>`
3. Relational `== != > < >= <=`
4. Logical `! && ||`
5. Compound assignment `+= -= *= /= %= &= |= ^= <<= >>=`
6. Increment/Decrement `++ --` (Prefix and Postfix)
7. Memory management `new new[] delete delete[]`
8. Other `?: -> :: sizeof . << >>` etc.
9. Even more? http://www.cplusplus.com/doc/tutorial/operators/

### If-else

### Switch

### For/While

1. Break/Continue

### Stack memory

### Heap memory

### Pointers

1. Pointer arithmetic
2. Adding 1 adds 1 of the size of the object, not 1 byte

### Functions

1. Default parameters
2. Function overload
3. Passing arguments by value vs reference

### Recursion

### Preprocessor commands

### NULL and nullptr and when to use them?

### C-like casting with (type)

## Questions

1. How are static arrays stored in memory?

2. How are 2D static arrays stored in memory and why can't we treat them as double pointer?

3. How is new int[10] stored in memory?

4. How is new int*[10] stored in memory?

5. Prefix vs Postfix operators ++ and --?

6. How to compare floats/doubles and why can't we use == most of the time?

7. What is the variable assignment priority? - From right to left

8. How to write one line if statement?

9. Can we have a for-loop without body?

10. Can we call multiple expressions in a while-loop body without parentheses?

11. How to initialize structs? - With { }

12. What is a string? - Null-terminated array of characters

13. -> vs . or accessing static and dynamic objects ptr-> is equal to (*ptr).

14. Should we use `using namespace std`?

15. What are namespaces? - Named scopes

16. Why do we need both class and struct? - For compatibility

17. How to use the debugger in visual studio?

18. How to create new projects in visual studio?

19. How do static variables in classes/structs work?

20. How do static variables in functions work?
