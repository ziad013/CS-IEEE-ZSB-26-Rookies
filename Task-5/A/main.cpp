#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int XOR = 0;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                    XOR ^= a[j];
            }
            if (XOR == a[i])
            {
                cout << a[i] << endl;
                break;
            }
        }
    }
}
