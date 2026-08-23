# Day 12 - Find the Missing Number

## 📌 Problem
Given an array containing numbers from `0` to `n` with exactly one number missing, find the missing number.

## 💡 Example

### Input
3 0 1 4 2

### Output
The missing number is: 5

## 🧠 Approach
Used the **XOR (Bitwise XOR)** approach to find the missing number.

XOR properties used:
- `x ^ x = 0`
- `x ^ 0 = x`

The numbers that are present cancel each other out, leaving only the missing number.

## 🛠️ Concepts Used
- Arrays
- For Loop
- Bitwise XOR
- Array Traversal

## ⏱️ Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## 🎯 What I Learned
- How XOR can be used to solve array problems
- How to find a missing number without using extra space
- Efficient array traversal
