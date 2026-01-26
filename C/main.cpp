#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> total(n + 1, 0);
        for (int x : a) total[x]++;

        bool ok = true;
        for (int v = 1; v <= n; v++)
            if (total[v] % k != 0)
                ok = false;
        if (!ok) {
            cout << 0 << "\n";
            continue;
        }

        vector<int> limit(n + 1, 0);
        for (int v = 1; v <= n; v++)
            limit[v] = total[v] / k;

        vector<int> cnt(n + 1, 0);
        int bad = 0;
        long long ans = 0;
        int r = 0;

        for (int l = 0; l < n; l++) {
            if (r < l) r = l;

            while (r < n) {
                int x = a[r];
                cnt[x]++;
                if (cnt[x] > limit[x]) {
                    cnt[x]--;
                    break;
                }
                r++;
            }

            ans += r - l;

            int x = a[l];
            cnt[x]--;
        }

        cout << ans << "\n";
    }
    return 0;
}
