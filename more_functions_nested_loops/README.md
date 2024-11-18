### 1. What are Nested Loops and How to Use Them?

**Nested loops** refer to having one loop inside another. The inner loop runs its complete cycle for each iteration of the outer loop. Nested loops are useful when working with multi-dimensional data structures, such as matrices or grids, or when you need to perform repeated operations on multiple items.

#### Syntax:
```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        // Code to execute
    }
}
```

#### Example:
```c
#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    
    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for columns
        for (int j = 0; j < cols; j++) {
            printf("* ");
        }
        printf("\n");  // Print a new line after each row
    }

    return 0;
}
```

#### Output:
```
* * * 
* * * 
* * * 
```

In this example, the outer loop controls the number of rows, while the inner loop controls the number of columns.

#### When to Use Nested Loops:
- **Matrix operations**: Traversing a 2D array.
- **Combinatorial problems**: Generating combinations, permutations, etc.
- **Grid-based problems**: Like games, simulations, or searches in a grid.

---

### 2. What is a Function and How Do You Use Functions?

A **function** is a block of code that performs a specific task. It allows you to encapsulate a piece of logic that can be reused, improving modularity, readability, and maintainability.

#### Syntax:
```c
return_type function_name(parameters) {
    // Code to execute
    return value; // If applicable
}
```

#### Example:
```c
#include <stdio.h>

// Function declaration (or prototype)
int add(int a, int b);

int main() {
    int sum = add(3, 5);
    printf("Sum: %d\n", sum);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

In the above example:
- `add` is a function that takes two integers as input and returns their sum.
- It is **declared** at the beginning and **defined** after `main`.

#### Function Declaration:
A function **declaration** (also called a **prototype**) provides information about the function (its return type, name, and parameters) without providing the implementation (code). This allows functions to be called before they are defined in the source code.

#### Example:
```c
int add(int, int);  // Function prototype
```

---

### 3. What is the Difference Between a Declaration and a Definition of a Function?

- **Function Declaration**: Specifies the function's **signature** (name, return type, and parameters) but does not contain the implementation (the actual body of the function).
  - It tells the compiler about the function's existence, allowing it to check calls to the function for correctness.
  - Example:
    ```c
    int add(int, int);  // Declaration only (prototype)
    ```

- **Function Definition**: Provides the complete function with its **implementation** (body), i.e., what the function actually does.
  - Example:
    ```c
    int add(int a, int b) {
        return a + b;  // Definition (implementation)
    }
    ```

#### Key Difference:
- **Declaration**: Only the function signature.
- **Definition**: The function's signature and its body.

---

### 4. What is a Prototype?

A **prototype** is a declaration of a function that provides information about the function's signature (its return type, name, and parameters). It is usually placed at the beginning of the file or in a header file.

#### Example:
```c
int add(int a, int b);  // Function prototype
```

The prototype is essential to inform the compiler about the function's return type and parameter types before the function is actually used in the code. If a function is called before its definition, a prototype is required.

---

### 5. Scope of Variables

**Scope** refers to the region of the program where a variable can be accessed.

Types of variable scopes:
- **Local Scope**: Variables declared within a function or a block. They are accessible only within that function or block.
  ```c
  void function() {
      int a = 10;  // 'a' is local to 'function'
      printf("%d\n", a);  // This is valid
  }
  // 'a' is not accessible here
  ```

- **Global Scope**: Variables declared outside any function. They are accessible from any function in the program after their declaration.
  ```c
  int globalVar = 5;  // 'globalVar' is global
  
  void function() {
      printf("%d\n", globalVar);  // 'globalVar' can be accessed here
  }
  ```

- **Block Scope**: Variables declared inside loops, conditionals, or smaller blocks. These variables are accessible only within the block.
  ```c
  for (int i = 0; i < 5; i++) {
      int blockVar = i * 2;  // 'blockVar' is accessible only inside the loop
      printf("%d ", blockVar);
  }
  // 'blockVar' is not accessible here
  ```

---

### 6. What are the GCC Flags `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, `-std=gnu89`?

These are options passed to the GCC (GNU Compiler Collection) to control the warnings, errors, and behavior of the compiler:

- **`-Wall`**: Enables most compiler warnings. It helps you catch potential issues early in your code by warning about common mistakes and code practices.
  
- **`-Werror`**: Treats all warnings as errors. If any warning occurs during compilation, the compiler will stop and not produce an output, making sure that all warnings are addressed.
  
- **`-pedantic`**: Forces the compiler to be stricter in terms of the C standard. It ensures that your code adheres more closely to the C standard and warns about non-standard practices.

- **`-Wextra`**: Enables additional warnings that are not enabled by `-Wall`. This gives you even more feedback about possible issues with your code.

- **`-std=gnu89`**: Specifies the C language standard to use for compilation. The `gnu89` standard is the C89 standard with some GNU extensions. This can be useful for legacy code or when you specifically want to adhere to this older version of the C standard.

#### Example:
```bash
gcc -Wall -Werror -pedantic -Wextra -std=gnu89 my_program.c -o my_program
```

This command will compile the program with strict warnings and enforce the `gnu89` standard.

---

### 7. What Are Header Files and How to Use Them with `#include`?

A **header file** is a file that typically contains function declarations (prototypes), type definitions, macros, and sometimes inline functions. Header files are included in C programs to share declarations and definitions between multiple source files.

#### Purpose of Header Files:
- To declare functions, structures, constants, and types that are shared across different files.
- To provide the interface to functions and data structures that can be used in multiple source files.

#### How to Use Header Files:
- You include header files in your C programs using the `#include` directive.
- There are two types of includes:
  1. **Standard libraries**: These are included with angle brackets `< >` (e.g., `<stdio.h>`).
  2. **Custom header files**: These are included with double quotes `" "` (e.g., `"my_header.h"`).

#### Example:
```c
// my_header.h
#ifndef MY_HEADER_H  // Include guard
#define MY_HEADER_H

void printMessage();  // Function declaration

#endif  // MY_HEADER_H
```

```c
// main.c
#include <stdio.h>        // Standard header
#include "my_header.h"    // Custom header

void printMessage() {
    printf("Hello, World!\n");
}

int main() {
    printMessage();  // Call function from custom header
    return 0;
}
```

#### Header Guards:
- **Include guards** prevent a header file from being included multiple times in the same file, which can lead to redefinition errors.
- Use `#ifndef`, `#define`, and `#endif` to protect your header file:
  ```c
  #ifndef MY_HEADER_H
  #define MY_HEADER_H
  // Declarations and definitions here
  #endif  // MY_HEADER_H
  ```

This ensures that the contents of `my_header.h` are only included once per compilation unit, regardless of how many times it is included in different files.

---

### Summary:

- **Nested loops**: Loops inside loops, useful for multi-dimensional data structures or repeated tasks.
- **Functions**: Blocks of code that perform specific tasks, allowing for code reuse. Functions are declared (with prototypes) and defined (with implementations).
- **Declaration vs Definition**: A declaration specifies a function's signature, while a definition provides its body.
- **Scope of Variables**: Refers to where a variable is accessible (local, global, block).
- **GCC flags

**: Control the level of warnings, errors, and standards for compilation. Common flags are `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, and `-std=gnu89`.
- **Header Files**: Files that declare functions and variables used across multiple source files, included with `#include`.