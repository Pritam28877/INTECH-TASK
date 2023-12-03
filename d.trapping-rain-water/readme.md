# Calculating Trapped Rainwater in a Roof Structure

This document provides an explanation and code for calculating the amount of rainwater that can be trapped on a roof structure given an array of integers representing the elevation at various positions. Each position is separated by a unit length.

## Problem Statement

Given an array of integers where each element represents the height of a section of the roof, calculate how much rainwater can be trapped on the roof after heavy rainfall.

For example, consider the following array:

```
[2, 1, 3, 0, 1, 2, 3]
```

The amount of rainwater that can be trapped is 7 units.

## Solution

The solution involves iterating over the array and for each element, calculating the maximum element on the left and right. The amount of water that can be stored in every array element is the minimum of maximum left and right heights minus the height of the current element.

Here is the C++ code that implements this solution:

```cpp
#include <bits/stdc++.h>
using namespace std;

int findWater(int arr[], int n) {
    int left[n];
    int right[n];

    // Fill left array
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
       left[i] = max(left[i-1], arr[i]);

    // Fill right array
    right[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
       right[i] = max(right[i+1], arr[i]);

    // Calculate the accumulated water element by element
    // consider the amount of water on i'th bar, the
    // amount of water accumulated on this particular
    // bar will be equal to min(left[i], right[i]) - arr[i] .
    int water = 0;
    for (int i = 0; i < n; i++)
       water += min(left[i],right[i]) - arr[i];

    return water;
}

int main() {
    int arr[] = {2, 1, 3, 0, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum water that can be accumulated is " << findWater(arr, n);
    return 0;
}
```

## Time and Space Complexity

The time complexity of this algorithm is O(n), where n is the number of elements in the array. This is because we are making one pass through the array.

The space complexity of the algorithm is also O(n), as we are creating two additional arrays of size n.

## Real-World Use Case

A real-world use case where a stack is a better data structure than an array is in the implementation of undo/redo functionality in software applications like text editors or graphic design tools. Each action performed by the user can be pushed onto the stack, and when the user wants to undo an action, the most recent action can be popped from the stack. This would not be as efficient with an array, as it would require shifting all elements.

## Note

This code assumes that the input array does not contain any negative numbers, as they could represent a hole in the roof structure where water could leak out. If the array could contain negative numbers, additional checks would need to be added to the code.
