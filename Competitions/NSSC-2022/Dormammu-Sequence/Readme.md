# Dormammu Sequence 📜

## Problem Statement 🤔

You have been given a integer n and your task is find the nth Dormammu Number. Dormammu series is a number series where each element is the sum of the previous two elements. And the first two elements are 0 and 1.

## Input Format 📥

- T (1 <= T <= 81) the number of test cases
- N (1 <= N <= 100) nth number in the Dormammu sequence.


## Output Format 📤

- For each number , print the nth Dormammu number, D(n) in separate line.

## Example

Input:

``` 
5
0
1
3
5
7
```

Output:
```
0
1
2
5
13
```

## Solution 💡

The solution uses a recursion algorithm. You can use recursion function but in some times it failed with ```Status :Terminated due to timeout``` so here I use an array to store the calculated values of D(n) and avoids recalculating the same values when they are needed again. This greatly improves the performance and allows the program to complete within the time limit even for large values of n.

## Resources 🔗

- [Problem statement and test inputs/outputs](https://www.hackerrank.com/contests/nssc-2022/challenges/dormammu-sequence)
- [Sample solution in C++](https://github.com/LakiraMD/Algorithm-Mastery/blob/main/Competitions/NSSC-2022/Dormammu-Sequence/dormammu-sequence.cpp)

## Note 📝
This problem is from National School Software Competition 2022 held in Sri lanka and this problem is a good example of using recursion and arrays.
