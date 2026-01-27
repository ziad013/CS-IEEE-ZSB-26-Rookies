#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int left = 0, right = n - 1;
    long long time_A = 0, time_B = 0;
    int count_A  = 0, count_B = 0;

    while (left <= right)
    {
        if (time_B >= time_A)
        {
            time_A += x[left];
            count_A++;
            left++;
        }
        else
        {
            time_B += x[right];
            count_B++;
            right--;
        }
    }

    cout << count_A << " " << count_B << endl;
    return 0;
}

