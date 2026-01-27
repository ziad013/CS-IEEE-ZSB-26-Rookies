
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    long long q;
    cin >> q;

    while (q--) {
        long long m;
        cin >> m;

        long long first = 0, endd = n - 1;
        long long result = -1;

        while (first <= endd) {
            long long mid = (first + endd) / 2;
            if (x[mid] <= m) {
                result = mid;
                first = mid + 1;
            } else {
                endd = mid - 1;
            }
        }


        cout << result + 1 << "\n";
    }

    return 0;
}
