### 1. What are nested loops and how to use them

A **nested loop** is a loop inside another loop. The inner loop runs its full cycle for each iteration of the outer loop. Nested loops are commonly used when working with multi-dimensional data structures, such as matrices, or when you need to perform repeated operations on multiple items.

#### Example of nested `for` loops:

```c
#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop iterates 3 times
    for (i = 0; i < 3; i++) {
        // Inner loop iterates 3 times for each iteration of the outer loop
        for (j = 0; j < 3; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }

    return 0;
}
```

#### Output:
```
i = 0, j = 0
i = 0, j = 1
i = 0, j = 2
i = 1, j = 0
i = 1, j = 1
i = 1, j = 2
i = 2, j = 0
i = 2, j = 1
i = 2, j = 2
```

- The outer loop runs 3 times (i=0, i=1, i=2).
- For each iteration of the outer loop, the inner loop also runs 3 times.

#### When to use nested loops:
- **Multi-dimensional arrays**: Accessing elements in matrices or 2D arrays.
- **Combinations/Permutations**: Generating all pairs or combinations of data.

### 2. What is a function and how do you use functions

A **function** is a block of code that performs a specific task and can be executed when called in a program. Functions allow for code reuse, modularity, and better organization.

#### Function Declaration:
A function is declared (or prototyped) to define its return type, name, and parameters. This allows the compiler to check that the function is called correctly.

#### Example:
```c
#include <stdio.h>

// Function declaration (prototype)
int add(int, int);

int main() {
    int result = add(3, 4);
    printf("Sum: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

#### Explanation:
1. **Function Declaration**: The declaration `int add(int, int);` tells the compiler that there is a function named `add` that takes two `int` arguments and returns an `int`.
2. **Function Call**: In `main()`, we call the function `add(3, 4)` and store the result in `result`.
3. **Function Definition**: The function `add` is defined below the `main` function, where it adds the two parameters and returns the result.

### 3. What is the difference between a declaration and a definition of a function?

- **Function Declaration**: A declaration specifies the function's **signature** (return type, name, and parameter types), but does not provide the implementation. It tells the compiler that a function exists but does not give the details of its operation.
  
  **Example**: `int add(int, int);`

- **Function Definition**: A definition includes both the **declaration** of the function and its **implementation** (i.e., the actual code that performs the task).
  
  **Example**: 
  ```c
  int add(int a, int b) {
      return a + b;
  }
  ```

#### When to use each:
- **Declaration**: If you are separating the declaration of a function (usually in a header file) from its definition (in a source file), or if you're declaring functions before their definition to provide forward declarations.
- **Definition**: You must define the function to implement its functionality.

### 4. What is a prototype?

A **prototype** is a declaration of a function that specifies its return type, name, and parameters without providing the full implementation. It is typically placed at the top of a source file or in a header file to allow other parts of the program to call the function before its full definition is encountered.

**Example**:
```c
// Prototype (declaration)
int multiply(int, int);

int main() {
    int result = multiply(3, 5);
    printf("Product: %d\n", result);
    return 0;
}

// Definition
int multiply(int a, int b) {
    return a * b;
}
```

The function prototype tells the compiler about the function’s return type and parameters, so it can check function calls for correctness.

### 5. Scope of Variables

The **scope** of a variable refers to the region in the code where the variable can be accessed. There are several types of scope:

- **Local Scope**: Variables declared inside a function or block. They are only accessible within that function/block.
  ```c
  void function() {
      int localVar = 10;  // localVar is only accessible inside function()
  }
  ```
  
- **Global Scope**: Variables declared outside of any function. These are accessible from anywhere in the program.
  ```c
  int globalVar = 20;  // globalVar is accessible anywhere in the program
  ```

- **Block Scope**: Variables declared inside loops or conditionals. They are only accessible within that specific block of code.
  ```c
  for (int i = 0; i < 5; i++) {  // i is only accessible within this for loop
      printf("%d\n", i);
  }
  ```

### 6. GCC Flags: `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, `-std=gnu89`

These are command-line options for the GCC compiler that control warnings, errors, and the standard used during compilation.

- **`-Wall`**: Enables most warning messages. It is a good practice to always use this flag to catch potential issues early.
  
- **`-Werror`**: Treats all warnings as errors, causing the compiler to stop compilation if there are any warnings.

- **`-pedantic`**: Enforces strict compliance with the C standard, warning about non-standard constructs and behaviors.

- **`-Wextra`**: Enables additional warning messages that are not included with `-Wall`. This can provide more detailed checks for your code.

- **`-std=gnu89`**: Specifies that the code should be compiled according to the **GNU C standard** from 1989 (i.e., the C89 standard with some GNU extensions). This can be used for legacy code or if you specifically want to use older C features.

### 7. What are header files and how to use them with `#include`

A **header file** is a file that contains function declarations, type definitions, macros, and other declarations. Header files are used to provide an interface to functions and variables in a program, making it easier to modularize code and share common definitions across multiple source files.

#### Basic structure of a header file:

```c
// example.h
#ifndef EXAMPLE_H  // Include guard to prevent multiple inclusions
#define EXAMPLE_H

int add(int, int);  // Function declaration

#endif  // EXAMPLE_H
```

#### How to use a header file with `#include`:

- You include a header file using the `#include` directive in your C or C++ source file.
- The `#include` directive tells the preprocessor to include the contents of the header file at the point where it is called.

#### Example usage:

```c
// main.c
#include <stdio.h>
#include "example.h"  // Include your custom header file

int main() {
    int result = add(5, 10);
    printf("Result: %d\n", result);
    return 0;
}

// example.c
#include "example.h"

int add(int a, int b) {
    return a + b;
}
```

- The `#include "example.h"` statement includes the content of `example.h`, allowing `main.c` to use the `add` function defined in `example.c`.

#### Include Guards:
Include guards are a technique to prevent a header file from being included multiple times in the same file, which can cause redefinition errors. This is done using `#ifndef`, `#define`, and `#endif` preprocessor directives.