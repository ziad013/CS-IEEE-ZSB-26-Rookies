#include <iostream>
#include <vector>
using namespace std;

long long sum_range(int s, int E, vector<long long> & cum_sum)
{
    return cum_sum[E] - cum_sum[s - 1];
}

int main()
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

    vector<pair<int,int>> queries(Q);

    for (int i = 0; i < Q; i++)
    {
        cin >> queries[i].first >> queries[i].second;
    }

    vector<long long> s(n + 1, 0);


    for (int i = 1; i <= n; i++)
    {
        s[i] = v[i] + s[i - 1];
    }


    for (int i = 0; i < Q; i++)
    {
        int a = queries[i].first;
        int b = queries[i].second;
        cout << sum_range(a, b, s) << endl;
    }

    return 0;
}
