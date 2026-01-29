#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    long long xor_Sum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        xor_Sum = xor_Sum ^ x[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << (xor_Sum ^ x[i]) << " ";
    }

}
