#include <bits/stdc++.h>
using namespace std;

template<typename T>
istream& operator>>(istream& is, vector<T>& vec)
{
    for (auto& i : vec) is >> i;
    return is;
}

int solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i];
    vector<int> pre1(n + 1, 0), pre2(n + 1, 0), pre3(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre1[i] = pre1[i-1] + (arr[i] == 1);
        pre2[i] = pre2[i-1] + (arr[i] == 2);
        pre3[i] = pre3[i-1] + (arr[i] == 3);
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int count1 = pre1[y] - pre1[x-1];
        int count2 = pre2[y] - pre2[x-1];
        int count3 = pre3[y] - pre3[x-1];
        cout << count1 << " " << count2 << " " << count3 << endl;
    }
    return 0;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
     solve();
    return 0;
}



































/*
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N, Q;
    cin >> N >> Q;

    vector<int> pre1(N+1, 0), pre2(N+1, 0), pre3(N+1, 0);

    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;


        pre1[i] = pre1[i-1];
        pre2[i] = pre2[i-1];
        pre3[i] = pre3[i-1];


        if (x == 1) pre1[i]++;
        else if (x == 2) pre2[i]++;
        else pre3[i]++;
    }

    while (Q--) {
        int a, b;
        cin >> a >> b;

        int c1 = pre1[b] - pre1[a-1];
        int c2 = pre2[b] - pre2[a-1];
        int c3 = pre3[b] - pre3[a-1];

        cout << c1 << " " << c2 << " " << c3 << "\n";
    }

    return 0;
}
*/
