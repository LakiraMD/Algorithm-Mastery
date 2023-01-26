#include <iostream>
using namespace std;

int dormammu(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << dormammu(n) << endl;
    }
    return 0;
}