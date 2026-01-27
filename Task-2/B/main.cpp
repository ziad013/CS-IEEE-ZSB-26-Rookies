
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        int total_parity = 0;
        vector<int> prefix(n+1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] %= 2;
            prefix[i+1] = prefix[i] + a[i];
        }
        total_parity = prefix[n] % 2;

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            l--;
            r--;

            int sum_range_parity = (prefix[r+1] - prefix[l]) % 2;
            int len_parity = (r - l + 1) % 2;
            int k_parity = k % 2;

            int new_parity = (total_parity - sum_range_parity + len_parity * k_parity + 2) % 2;

            if (new_parity == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}









































/*
#include <iostream>
#include <vector>
using namespace std;

long long sum_range(int s, int E, vector<long long> & cum_sum)
{
    return cum_sum[E] - cum_sum[s - 1];
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;

        int Q;
        cin >> Q;

        vector<long long> v(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }


        vector<int> L(Q), R(Q);
        vector<int> K(Q);

        for (int i = 0; i < Q; i++)
        {
            cin >> L[i] >> R[i] >> K[i];
        }


        vector<long long> s(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            s[i] = v[i] + s[i - 1];
        }

        long long total = s[n];

        for (int i = 0; i < Q; i++)
        {
            int l = L[i];
            int r = R[i];
            int k = K[i];

            long long main_range = sum_range(l, r, s);
            long long len = r - l + 1;

            long long vir_sum = total - main_range + len * k;

            if(vir_sum % 2 == 1)
                cout << "YES" <<endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
*/
