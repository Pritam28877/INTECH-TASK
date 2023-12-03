# MinStack: A Stack Data Structure with a `getMin()` Function

This C++ program implements a special kind of stack data structure, called `MinStack`, which in addition to the usual `push` and `pop` operations, also provides a `getMin` operation that returns the minimum element from the stack in constant time O(1).

## Code Explanation

The `MinStack` class contains two stacks: `stackNodes` and `mins`. `stackNodes` is the main stack that stores all the elements, while `mins` is an auxiliary stack that keeps track of the minimum elements.

### The `push` function

The `push` function adds a new element to the top of `stackNodes`. If `mins` is empty or the new element is less than or equal to the current minimum element, the new element is also pushed onto `mins`.

### The `pop` function

The `pop` function removes the top element from `stackNodes`. If the removed element is the same as the current minimum element, it is also removed from `mins`.

### The `top` function

The `top` function returns the top element from `stackNodes` without removing it.

### The `getMin` function

The `getMin` function returns the current minimum element from the stack. This is achieved by returning the top element from `mins`.

## How to Run the Program

1. Compile the program using a C++ compiler (e.g., g++).
2. Run the compiled program. You will be prompted to enter the number of elements and the elements to be pushed onto the stack.
3. The program will print the minimum element in the stack.

## Time and Space Complexity

The time complexity for the `push`, `pop`, and `getMin` operations is O(1). The space complexity is O(n), where n is the number of elements in the stack. This is because we are using an additional stack to keep track of the minimum elements.

## Note

If the stack is empty, calling `pop`, `top`, or `getMin` will lead to undefined behavior. Therefore, always ensure that the stack is not empty before calling these functions.

This program demonstrates the use of the two-stack technique to implement a stack with a `getMin` operation in constant time. It's a great example of how to manipulate stacks and design data structures in C++. Enjoy coding! 😊
