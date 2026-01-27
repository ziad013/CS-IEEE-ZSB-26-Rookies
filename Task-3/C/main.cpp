#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> Head(n), Body(m);

    for (int i = 0; i < n; i++)
    {
        cin >> Head[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> Body[i];
    }

    sort(Head.begin(), Head .end());
    sort(Body.begin(), Body.end());

    int i = 0, j = 0;
    int robots = 0;

    while (i < n && j < m) {
        if (Head[i] <= Body[j]) {
            robots++;
            i++;
            j++;
        } else {
            j++;
        }
    }

    if (robots >= k)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}

