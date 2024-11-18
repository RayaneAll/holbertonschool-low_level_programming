### 1. How to use arguments passed to your program

In C and C++, when you run a program from the command line, you can pass arguments to it. These arguments are available to your program via the `main` function, specifically in the form of two parameters: `argc` and `argv`.

- `argc` (argument count) is an integer that represents the number of arguments passed to the program.
- `argv` (argument vector) is an array of strings (character pointers), where each element is a pointer to a null-terminated string representing each argument passed to the program.

#### Example:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc is the number of arguments, including the program name
    printf("Number of arguments: %d\n", argc);

    // Loop through each argument
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
```

#### Explanation:
- The program will print the number of arguments passed (`argc`), followed by each argument (`argv[i]`).
- The first element of `argv` (`argv[0]`) is typically the program's name, and subsequent elements contain the other command-line arguments.

**Example of running the program**:
```bash
$ ./my_program arg1 arg2 arg3
Number of arguments: 4
Argument 0: ./my_program
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3
```

### 2. Two prototypes of `main` and when to use them

There are two common prototypes for the `main` function:

1. **`int main(void)`**
   - This is the simplest form of `main` that doesn't accept any command-line arguments.
   - It indicates that the program does not require any arguments and does not use `argc` or `argv`.
   - This prototype is used when you do not need to process any command-line arguments.

   **Example:**
   ```c
   #include <stdio.h>

   int main(void) {
       printf("Hello, World!\n");
       return 0;
   }
   ```

2. **`int main(int argc, char *argv[])`**
   - This is the most commonly used version of `main` that allows command-line arguments to be passed into the program.
   - `argc` is the number of arguments, and `argv` is the array of arguments.
   - This prototype is used when your program needs to handle command-line arguments.

   **Example:**
   ```c
   #include <stdio.h>

   int main(int argc, char *argv[]) {
       if (argc > 1) {
           printf("First argument: %s\n", argv[1]);
       } else {
           printf("No arguments passed.\n");
       }
       return 0;
   }
   ```

   **When to use each:**
   - Use `int main(void)` if you don’t need to accept command-line arguments.
   - Use `int main(int argc, char *argv[])` if you need to process command-line arguments.

### 3. How to use `__attribute__((unused))` or `(void)` for unused variables or parameters

In C and C++, sometimes you may declare variables or parameters that are not used within the function or program. This can cause compiler warnings about unused variables. You can use two techniques to silence these warnings:

#### a. **Using `__attribute__((unused))` (GCC-specific)**

GCC provides an attribute to indicate that a variable or function parameter is intentionally unused, preventing warnings.

**Example:**
```c
#include <stdio.h>

void example_function(int unused_param __attribute__((unused))) {
    // unused_param is intentionally not used
    printf("Function executed\n");
}

int main() {
    example_function(42);  // Argument '42' is passed, but unused_param is marked as unused
    return 0;
}
```

In this case, `unused_param` is marked with the `__attribute__((unused))` to tell GCC not to issue a warning about the unused parameter.

#### b. **Using `(void)`**

A more portable way to indicate that a parameter is unused, and is recognized by most compilers, is to cast the parameter to `void`. This is commonly used for unused parameters in function declarations.

**Example:**
```c
#include <stdio.h>

void example_function(int unused_param) {
    (void)unused_param;  // Mark the parameter as unused
    printf("Function executed\n");
}

int main() {
    example_function(42);  // Argument '42' is passed, but unused_param is ignored
    return 0;
}
```

Casting the parameter to `(void)` tells the compiler that you intentionally did not use the parameter and prevents warnings about it being unused.

### Summary:

- **Arguments passed to your program** are available in `main` via the `argc` (number of arguments) and `argv` (array of argument strings).
- **Two `main` prototypes**:
  - `int main(void)` for programs without command-line arguments.
  - `int main(int argc, char *argv[])` for programs that need to handle command-line arguments.
- To avoid warnings about **unused variables** or **parameters**:
  - Use `__attribute__((unused))` (for GCC) or cast unused parameters to `(void)` to indicate that the variables/parameters are intentionally unused.