#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  int n;
    cin >> n;

    vector<long long> v1(n+1), v2(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> v1[i];
        v2[i] = v1[i];
    }

    vector<long long> pref1(n+1, 0), pref2(n+1, 0);
    for (int i = 1; i <= n; i++) {
        pref1[i] = pref1[i-1] + v1[i];
    }

    sort(v2.begin()+1, v2.end());
    for (int i = 1; i <= n; i++) {
        pref2[i] = pref2[i-1] + v2[i];
    }

    int Q;
    cin >> Q;
    while (Q--) {
        int T, l, r;
        cin >> T >> l >> r;

        if (T == 1) {
            cout << pref1[r] - pref1[l-1] << "\n";
        } else {
            cout << pref2[r] - pref2[l-1] << "\n";
        }
    }
    return 0;
}

