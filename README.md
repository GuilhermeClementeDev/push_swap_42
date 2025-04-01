# Push_Swap

Push_Swap is a project from the 42 School curriculum, focused on sorting a stack of integers using a limited set of operations. The goal is to implement an efficient sorting algorithm that sorts a stack using only two stacks and a set of predefined operations. The challenge lies in minimizing the number of operations performed, as the program must solve the problem with the fewest moves possible.

## Project Objective

The objective of this project is to implement a sorting algorithm for an integer stack. I have used the following operations:

- **sa** (swap a): Swap the first two elements of stack A.
- **pa** (push a): Push the top element from stack B onto stack A.
- **pb** (push b): Push the top element from stack A onto stack B.
- **ra** (rotate a): Rotate stack A by shifting all elements up by one.
- **rra** (reverse rotate a): Reverse rotate stack A by shifting all elements down by one.

The primary challenge is to determine the optimal sequence of these operations to sort a stack of integers with the least number of operations.

## How to Use

To use this project, compile the program and run it with the unsorted integers as arguments:

```bash
make
./push_swap 3 2 1
```
Examples
```bash
$ ./push_swap 5 2 8 1 4
rra
rra
pb
rra
rra
pb
ra
pa
pa
