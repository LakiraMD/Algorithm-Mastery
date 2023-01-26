/*
 * NSSC 2019 - Geeky Numbers
 * https://www.hackerrank.com/contests/nssc-2019/challenges/geeky-numbers
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


// function to check geeky numbers
bool isGeekyNum(int p, int q) {
    // check if p is grater than q and returns false
    if (p > q) {
        return false;
    }
        // check if p is equal to q and returns true
    else if (p == q) {
        return true;
    }
    return isGeekyNum(p * p, q);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p, q;
    cin >> p >> q;
    isGeekyNum(p, q) ? cout << "WORSHIP" : cout << "NO WORSHIP";
    return 0;
}
