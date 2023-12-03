# Finding the Kth Node from the End of a Linked List

This C++ program finds the kth node from the end of a linked list. The linked list is a data structure consisting of nodes, each containing a data field and a "next" field pointing to the next node in the sequence.

## Code Explanation

The program contains a `Node` struct representing a node in the linked list. Each `Node` contains an integer `data` and a `next` pointer to the next node in the list.

The `push` function is used to add a new node to the beginning of the linked list. It takes a reference to the head of the list and the data for the new node as parameters.

The `printPathToKthFromLast` function is used to find and print the path to the kth node from the end of the linked list. It uses two pointers, `mainptr` and `refptr`. The `refptr` is moved `k` nodes ahead of `mainptr`. Then, both pointers are moved one step at a time until `refptr` reaches the end of the list. At this point, `mainptr` points to the kth node from the end. The function then prints the path from the head of the list to the kth node.

In the `main` function, the user is prompted to enter the number of nodes and the elements of the linked list, as well as the value of `k`. The `push` function is called in a loop to add the elements to the linked list, and the `printPathToKthFromLast` function is called to print the path to the kth node from the end.

## How to Run the Program

1. Compile the program using a C++ compiler (e.g., g++).
2. Run the compiled program. You will be prompted to enter the number of nodes, the elements of the linked list, and the value of `k`.
3. The program will print the path to the kth node from the end of the linked list.

## Time and Space Complexity

The time complexity of the program is O(n), where n is the number of nodes in the linked list. This is because the program makes a single pass through the linked list.

The space complexity of the program is O(1), as it uses a constant amount of space to store the two pointers and the count variable.

## Note

If the value of `k` entered by the user is greater than the number of nodes in the linked list, the program will print a message indicating this and terminate. Therefore, ensure that `k` is less than or equal to the number of nodes in the list.

This program demonstrates the use of the two-pointer technique, which is a common approach for solving linked list problems. It's a great example of how to manipulate pointers and traverse a linked list in C++. Enjoy coding! 😊
