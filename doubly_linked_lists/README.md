# Doubly Linked Lists

## Introduction

A **doubly linked list** is a type of data structure that consists of a sequence of nodes. Each node contains:
- **Data**: The value or information stored in the node.
- **Pointers**: Two references (or pointers) – one pointing to the previous node and one pointing to the next node in the sequence.

This structure allows traversal in both forward and backward directions, making it more versatile than a singly linked list.

## Features of a Doubly Linked List
- Each node has two links: 
  - `prev`: Points to the previous node.
  - `next`: Points to the next node.
- The first node (head) has its `prev` pointer set to `null`.
- The last node (tail) has its `next` pointer set to `null`.

## Why Use a Doubly Linked List?

### Advantages
1. **Bi-directional traversal**: You can move both forward and backward through the list.
2. **Efficient deletion**: Nodes can be deleted from any position with minimal adjustments to the pointers.
3. **Dynamic size**: Unlike arrays, the size of the list can grow or shrink as needed without reallocation.

### Disadvantages
1. Requires more memory per node due to the additional pointer.
2. Slightly more complex to implement compared to a singly linked list.

## How to Use Doubly Linked Lists

### Basic Operations
1. **Insertion**:
   - At the beginning.
   - At the end.
   - At a specific position.
2. **Deletion**:
   - From the beginning.
   - From the end.
   - From a specific position.
3. **Traversal**:
   - Forward (starting from the head).
   - Backward (starting from the tail).
4. **Search**:
   - Find a node containing specific data.

### Example in Pseudocode

#### Inserting at the Beginning
