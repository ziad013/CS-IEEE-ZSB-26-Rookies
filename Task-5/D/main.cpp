#include <bits/stdc++.h>
using namespace std;

int main() {


    int n, q;
    cin >> n >> q;
    vector<long long> x(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        long long result = 0;
        for (int i = a; i <= b; i++) {
            result ^= x[i];
        }
        cout << result << endl;
    }
}

