#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, c;
    cin >> a >> b >> c;

    int max_value = max(a * b * c, (a + b) * c);
    max_value = max(max_value, a * (b + c));
    max_value = max(max_value,a+b+b);

    cout << max_value << endl;
    return 0;
}
