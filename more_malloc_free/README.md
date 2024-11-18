### 1. How to Use the `exit` Function

The **`exit`** function is used to terminate a program early and return a status code to the operating system. It allows you to end the program from anywhere in your code, regardless of whether it's inside a function or in the middle of execution. This is particularly useful when you want to end the program due to some error or when a specific condition is met.

#### Syntax:
```c
void exit(int status);
```
- **`status`**: The exit status code that you want to return to the operating system. Typically, a **zero** value indicates that the program terminated successfully, while a **non-zero** value indicates that an error occurred.

- The exit status code can be accessed by other programs or scripts to determine whether your program ran successfully or encountered issues.

#### Example:
```c
#include <stdio.h>
#include <stdlib.h>  // Required for exit()

int main() {
    int condition = 1;  // Some condition to simulate an error
    if (condition) {
        printf("Something went wrong. Exiting program.\n");
        exit(1);  // Exit the program with status 1 (error)
    }
    printf("This line will not be reached.\n");
    return 0;  // Normally, you'd return 0 here
}
```

#### Behavior:
- When the program calls `exit(1)`, it immediately terminates and returns the value `1` to the operating system, indicating an error.
- The `printf` statement after the `exit(1)` will never be executed because `exit` halts the program immediately.

#### Common Use Case:
- **Error handling**: You can use `exit()` to terminate a program when a critical error occurs (e.g., memory allocation failure, file open failure).
- **Clean exit**: `exit()` will clean up resources like closing files and flushing output buffers before terminating.

---

### 2. What are the Functions `calloc` and `realloc` from the Standard Library and How to Use Them?

#### **`calloc` (Contiguous Allocation)**

The `calloc` function is used to allocate memory for an array of elements, initializing the memory to zero. It's particularly useful when you need an array of elements and you want each element to be initialized to 0.

#### Syntax:
```c
void *calloc(size_t num, size_t size);
```
- **`num`**: The number of elements you want to allocate memory for.
- **`size`**: The size (in bytes) of each element.

The function returns a pointer to the allocated memory, or `NULL` if the memory allocation fails.

- **Difference from `malloc`**: While `malloc` allocates uninitialized memory, `calloc` allocates memory and initializes it to zero.

#### Example:
```c
#include <stdio.h>
#include <stdlib.h>  // Required for calloc

int main() {
    int *arr;
    int num_elements = 5;

    // Allocate memory for an array of 5 integers, initialized to 0
    arr = (int *)calloc(num_elements, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }

    // Print the values of the array (should all be 0)
    for (int i = 0; i < num_elements; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);  // Don't forget to free the allocated memory
    return 0;
}
```

#### Output:
```
arr[0] = 0
arr[1] = 0
arr[2] = 0
arr[3] = 0
arr[4] = 0
```

In this example, `calloc` allocates memory for 5 integers and initializes them to 0.

---

#### **`realloc` (Reallocation)**

The `realloc` function is used to resize a previously allocated block of memory. It can either increase or decrease the size of the memory block. If you are growing the memory, `realloc` may allocate new memory and copy the contents of the old block to the new block. If shrinking, it reduces the memory without changing the contents.

#### Syntax:
```c
void *realloc(void *ptr, size_t new_size);
```
- **`ptr`**: A pointer to the previously allocated memory block (using `malloc`, `calloc`, or a previous `realloc`).
- **`new_size`**: The new size (in bytes) of the memory block.

If the reallocation is successful, it returns a pointer to the newly allocated memory, which may or may not be the same as the original pointer. If the reallocation fails, it returns `NULL`, and the original memory is **not freed**.

#### Example:
```c
#include <stdio.h>
#include <stdlib.h>  // Required for realloc

int main() {
    int *arr;
    int num_elements = 5;

    // Allocate memory for an array of 5 integers
    arr = (int *)malloc(num_elements * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }

    // Initialize the array with some values
    for (int i = 0; i < num_elements; i++) {
        arr[i] = i * 10;
    }

    // Resize the array to hold 10 integers
    num_elements = 10;
    arr = (int *)realloc(arr, num_elements * sizeof(int));
    if (arr == NULL) {
        printf("Reallocation failed.\n");
        return 1;
    }

    // Initialize the new elements
    for (int i = 5; i < num_elements; i++) {
        arr[i] = i * 10;
    }

    // Print all elements of the resized array
    for (int i = 0; i < num_elements; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);  // Don't forget to free the allocated memory
    return 0;
}
```

#### Output:
```
arr[0] = 0
arr[1] = 10
arr[2] = 20
arr[3] = 30
arr[4] = 40
arr[5] = 50
arr[6] = 60
arr[7] = 70
arr[8] = 80
arr[9] = 90
```

#### Key Notes about `realloc`:
- If `realloc` succeeds, it returns a pointer to the new memory block, which may be at a different memory location.
- If `realloc` fails, it returns `NULL` and the original memory block is left untouched, so you must handle that case properly.
- Always assign the result of `realloc` to a new pointer (or the same pointer if you're careful), because if `realloc` fails and you assign `NULL` to the original pointer, the memory is lost, leading to a **memory leak**.

---

### Summary:

1. **`exit` Function**: 
   - Use `exit(status)` to terminate a program and return an exit status to the operating system. Use `exit(0)` for successful termination, and non-zero values for errors.

2. **`calloc` Function**:
   - Allocates memory for an array of elements, initializing all elements to zero.
   - Syntax: `calloc(num, size)`, where `num` is the number of elements and `size` is the size of each element.

3. **`realloc` Function**:
   - Resizes a previously allocated memory block.
   - Syntax: `realloc(ptr, new_size)`, where `ptr` is a pointer to the existing memory and `new_size` is the new size in bytes.
   - It may move the memory block to a new location if the new size is larger.

Make sure to handle all cases of memory allocation and reallocation failures, and always free dynamically allocated memory when done to avoid memory leaks.