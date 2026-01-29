#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    long long result = 1;
    const int x = 1e9 + 7;
    for (int i = 0; i < n; i++) {
        result = (result * 2) % x;
    }

    cout << result;
}
