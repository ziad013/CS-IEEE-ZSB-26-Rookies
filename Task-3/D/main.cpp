#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    long long t;
    cin >> n >> t;

    vector<long long> k(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }

    long long first = 0;
    long long endd = (*min_element(k.begin(), k.end())) * t;

    while (first < endd)
    {
        long long mid = first + (endd - first) / 2;

        long long products = 0;
        for (int i = 0; i < n; i++)
        {
            products += mid / k[i];
        }

        if (products >= t)
            endd = mid;
        else
            first = mid + 1;
    }

    cout << first;
    return 0;
}
