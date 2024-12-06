# How to Manipulate Bits and Use Bitwise Operators

This repository provides a comprehensive introduction to **bit manipulation** and the use of **bitwise operators**. If you're looking to optimize your code or understand low-level data handling, this is the perfect starting point.

---

## Features

- Overview of common bitwise operators
- Techniques for bit manipulation
- Code examples in C++

---

## Table of Contents

1. [Introduction](#introduction)
2. [Bitwise Operators Overview](#bitwise-operators-overview)
3. [Common Bit Manipulation Techniques](#common-bit-manipulation-techniques)
4. [Code Examples](#code-examples)

---

## Introduction

Bit manipulation involves working with the binary representation of data. Using bitwise operators, you can perform operations at the bit level, enabling:

- Optimized calculations
- Efficient data encoding/decoding
- Control over low-level hardware behavior
- Solutions for algorithmic challenges in competitive programming

---

## Bitwise Operators Overview

| Operator    | Description                                | Symbol   |
|-------------|--------------------------------------------|----------|
| **AND**     | Sets each bit to 1 if both bits are 1      | `&`      |
| **OR**      | Sets each bit to 1 if one of the bits is 1 | `|`      |
| **XOR**     | Sets each bit to 1 if only one of the bits is 1 | `^`  |
| **NOT**     | Inverts all the bits                      | `~`      |
| **Left Shift** | Shifts bits to the left, adding zeros to the right | `<<` |
| **Right Shift** | Shifts bits to the right, discarding bits on the left | `>>` |

---

## Common Bit Manipulation Techniques

Here are some commonly used techniques:

1. **Check if a number is even or odd**
   - `(n & 1) == 0` → Even
   - `(n & 1) == 1` → Odd

2. **Flip a specific bit**
   - `number ^= (1 << position)`

3. **Check if a specific bit is set**
   - `(number & (1 << position)) != 0`

4. **Set a specific bit**
   - `number |= (1 << position)`

5. **Clear a specific bit**
   - `number &= ~(1 << position)`

---

## Code Examples

Here is a simple example in C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011

    cout << "AND: " << (a & b) << endl; // 0101 & 0011 = 0001 -> 1
    cout << "OR: " << (a | b) << endl;  // 0101 | 0011 = 0111 -> 7
    cout << "XOR: " << (a ^ b) << endl; // 0101 ^ 0011 = 0110 -> 6
    cout << "NOT a: " << (~a) << endl;  // ~0101 = ...11111010 (2's complement)

    return 0;
}
