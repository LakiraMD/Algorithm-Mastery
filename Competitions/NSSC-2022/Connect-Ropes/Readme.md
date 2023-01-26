# Connecting Ropes 🧵

## Problem Statement 🤔

WYou have been given a pile of ropes and the task is to combine them all into one final rope. However, when two ropes are connected together, one unit of length is lost from each rope. The goal is to determine the final length of the resulting rope after connecting all the ropes together in the most efficient way possible.

## Input Format 📥

- T (1 <= T <= 100) the number of test cases
- N (1 <= N <= 100) the number of ropes
- N integers representing the lengths of the ropes

## Output Format 📤

- or each test case, print a single integer representing the length of the final resulting rope.

## Example

Input:

``` 
2
3
3 4 6
2
10 15
```

Output:
```
9
23
```

## Solution 💡

The solution uses a for loop to iterate through the input ropes and a variable to keep track of the final rope length. We add the length of each rope to the final rope length and subtract 2 to account for the loss of length when connecting the ropes. The final rope length is then outputted.

## Resources 🔗

- [Problem statement and test inputs/outputs](https://www.hackerrank.com/contests/nssc-2022/challenges/connect-ropes)
- [Sample solution in C++](https://github.com/LakiraMD/Algorithm-Mastery/blob/main/Competitions/NSSC-2022/Connect-Ropes/connect-ropes.cpp)

## Note 📝
This problem is from National School Software Competition 2022 held in Sri lanka and this problem is a good example of using loops and keeping track of variables in problem solving.
