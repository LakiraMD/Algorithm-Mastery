# Geeky Numbers

## Problem Statement 🤔

Write a program to determine if a given number is a Geeky Number, where a Geeky Number is a square of another Geeky Number and all other Geeky Numbers are descendants of a head Geeky Number P.

## Input Format 📥

- The input contains two space separated integers P and Q. P is the head of Geeky Numbers
- 100,000 ≤ P,Q ≤ 100,000

## Output Format 📤

- Print “WORSHIP” if Q is a Geeky Number. Print “NO WORSHIP” if Q is not a Geeky Number.

## Example

Input:

``` 
2 16
```

Output:
```
WORSHIP
```

## Solution 💡

The solution to this problem is based on the concept of recursive algorithm. The main idea is to check that each square of ```P``` is equal to ```Q``` and stop checking if ```P``` is greater than ```Q```.

## Resources 🔗

- [Problem statement and test inputs/outputs](https://www.hackerrank.com/contests/nssc-2019/challenges/geeky-numbers)
- [Sample solution in C++](https://github.com/LakiraMD/Algorithm-Mastery/Competitions/geeky-numbers.cpp)

## Note 📝
This problem is from National School Software Competition 2019 held in Sri lanka and is one of the examples of using recursion in problem solving.
