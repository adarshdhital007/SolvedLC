#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> memo;

int fib(int n) {
    if (n <= 1) {
        return n;
    }

    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main() {
    int n;
    cin >> n;

    cout << fib(n) << endl;
    return 0;
}