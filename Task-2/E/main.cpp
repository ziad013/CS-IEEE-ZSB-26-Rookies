#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<long long> pref(N), suff(N);

    pref[0] = A[0];
    for (int i = 1; i < N; i++) {
        pref[i] = gcd(pref[i - 1], A[i]);
    }

    suff[N - 1] = A[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        suff[i] = gcd(suff[i + 1], A[i]);
    }

    long long max_gcd = 0;

    for (int i = 0; i < N; i++) {
        long long g;
        if (i == 0) {
            g = suff[1];
        } else if (i == N - 1) {
            g = pref[N - 2];
        } else {
            g = gcd(pref[i - 1], suff[i + 1]);
        }
        max_gcd = max(max_gcd, g);
    }

    cout << max_gcd << "\n";
    return 0;
}
