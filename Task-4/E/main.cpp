#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> x(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int left = 0, right = 0;
    long long sum = 0;
    long long countt = 0;

    while(right < n)
    {

        sum += x[right];
        while(sum > k && left <= right)
        {
            sum -= x[left];
            left++;
        }

        if(sum == k) countt++;

        right++;
    }

    cout << countt << endl;
    return 0;
}
