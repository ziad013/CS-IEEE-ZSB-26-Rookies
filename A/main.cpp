#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long t;
    cin >> n >> t;

    vector<int> x(n);
    for (int i = 0; i < n; i++){

        cin >> x[i];
    }

    int first = 0, endd = 0;
    long long sum = 0;
    int result = 0;

    while (endd < n)
    {
        sum += x[endd];

        while (sum > t)
        {
            sum -= x[first];
            first++;
        }

        result = max(result, endd - first + 1);
        endd++;
    }

    cout << result << endl;
    return 0;
}



