#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<long long> x(n);
    long long total = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        total += x[i];
    }

    long long result = 1000000000;

    for(int subset = 0; subset < (1 << n); subset++)
    {
        long long sum1 = 0;
        for(int i = 0; i < n; i++)
        {
            if(subset & (1 << i)) sum1 += x[i];
        }
        long long diff = 2*sum1 - total;
        result = min(result, diff);
    }

    cout << result;
}
