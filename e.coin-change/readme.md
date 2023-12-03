# Coin Change Problem README

## Overview


The Coin Change Problem is a well-known computer science classic that is the subject of your inquiry. The objective is to use a given set of currency denominations to determine the smallest number of coins required to produce change for a certain sum.

You have [1, 2, 5, 8, 10] coin denominations in your example, and you need to create change for 7. With the fewest coins needed, [2, 5] is the best option.



Usually, one uses either the greedy method or dynamic programming to tackle this problem.


## Problem Statement

Given a set of coin denominations and a target sum, the goal is to find the minimum number of coins needed to make change for that sum.

### Example

5 -
1234
2945
9273
3954
19374

Answers:
234
945
973
954
9374

## Approaches

Two common approaches to solve the Coin Change Problem are the greedy method and dynamic programming.

1. **Greedy Method:**
 The decision that appears to be the best at the time is always made by the avaricious algorithm. It would always select the biggest denomination in the coin change problem as long as it didn't go beyond the total amount that needed to be changed. This method does not, however, always result in the best answer. The greedy algorithm would select coins [4, 1, 1] if the coin denominations were [1, 3, 4], while [3, 3] would be the best option if the change needed to be made was 6.

2. **Dynamic Programming:**
  A more advanced method that can ensure an ideal outcome is dynamic programming. By decomposing the problem into smaller subproblems and using the answers to these subproblems to construct the solution to the main problem, it solves the problem. In order to get the ultimate solution for the coin change issue, it first determines the minimal number of coins required for all sums up to the specified amount.

Regarding the bonus question, the task involves taking one digit out of a number in order to get the biggest number that can be produced. Because you are selecting the locally best option at each step—removing the lowest number that has a larger digit to its right—this is a greedy problem.

## Usage

Feel free to use the provided example as a starting point to implement your solution to the Coin Change Problem. You can choose between the greedy method or dynamic programming based on your requirements.

