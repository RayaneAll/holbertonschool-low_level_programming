1. Create, Open, Close, Read, and Write Files in C
Functions Overview:
open(): Opens or creates a file.
close(): Closes an open file descriptor.
read(): Reads data from a file descriptor into a buffer.
write(): Writes data from a buffer to a file descriptor.
Example:
c
Copier le code
#include <fcntl.h> // For open
#include <unistd.h> // For read, write, close
#include <stdio.h> // For perror

int main() {
    int fd; // File descriptor
    char buffer[100];

    // Open or create a file
    fd = open("example.txt", O_CREAT | O_RDWR, 0644); // Open in read/write mode with permissions rw-r--r--
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    // Write to the file
    write(fd, "Hello, World!\n", 14);

    // Reposition file pointer to the beginning
    lseek(fd, 0, SEEK_SET);

    // Read from the file
    read(fd, buffer, 100);
    printf("Content: %s", buffer);

    // Close the file
    close(fd);
    return 0;
}
2. What Are File Descriptors
A file descriptor (FD) is an integer that uniquely identifies an open file or resource for a process. It's used in system calls to perform I/O operations.

When you open a file, the OS returns a file descriptor.
Example: int fd = open("file.txt", O_RDONLY);
3. The 3 Standard File Descriptors
File Descriptor	Purpose	POSIX Name
0	Standard Input	STDIN_FILENO
1	Standard Output	STDOUT_FILENO
2	Standard Error Output	STDERR_FILENO
Standard Input (0): Reads user input (e.g., keyboard).
Standard Output (1): Outputs normal data to the terminal.
Standard Error (2): Outputs error messages.
4. Using open, close, read, and write
System Call Syntax:
c
Copier le code
int open(const char *pathname, int flags, mode_t mode); // mode is optional
int close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
Example:
c
Copier le code
int fd = open("example.txt", O_RDONLY); // Open file in read-only mode
if (fd == -1) {
    perror("Open failed");
    return -1;
}

char buffer[100];
read(fd, buffer, 100); // Read 100 bytes
write(STDOUT_FILENO, buffer, 100); // Write to standard output
close(fd); // Close the file
5. Flags O_RDONLY, O_WRONLY, O_RDWR
These are modes passed to open():

O_RDONLY: Open file for read-only.
O_WRONLY: Open file for write-only.
O_RDWR: Open file for both reading and writing.
You can combine flags using the bitwise OR (|) operator:

Example: O_CREAT | O_WRONLY | O_TRUNC
6. File Permissions
Permission Types:
4 (read), 2 (write), 1 (execute).
Combine these to set permissions: 0644 (rw-r--r--).
Setting Permissions in open():
When creating a file with O_CREAT, specify the permissions as the third argument.

c
Copier le code
int fd = open("newfile.txt", O_CREAT | O_WRONLY, 0644);
// Owner: rw, Group: r, Others: r
7. What Is a System Call
A system call is a request from a user-space program to the kernel to perform a specific operation on its behalf. System calls allow access to hardware and kernel-managed resources like files, memory, or devices.

Examples:
open, read, write, close are system calls.
System calls interact directly with the kernel, unlike regular functions.
8. Difference Between a Function and a System Call
Aspect	Function	System Call
Definition	A block of reusable code in user space.	A request to the kernel for a resource.
Execution	Runs entirely in user space.	Transfers control to the kernel.
Examples	printf, strlen	open, read, write, close
Speed	Faster; no kernel transition.	Slower; involves kernel-user space switch.
Example:
printf calls write, but it formats and buffers data in user space before making the system call.
