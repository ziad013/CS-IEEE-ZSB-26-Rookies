#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        int left = 0, right = n - 1;
        long long sum_A = 0, sum_B = 0;
        int No_Can = 0;

        while (left <= right)
        {
            if (sum_A > sum_B)
            {
                sum_B += x[right];
                right--;
            }
            else if (sum_A < sum_B)
            {
                sum_A += x[left];
                left++;
            }
            else
            {
                No_Can = max(No_Can, left + (n - right - 1));
                sum_A += x[left];
                left++;
            }
        }

        if(sum_A == sum_B) {
            No_Can = max(No_Can, left + (n - right - 1));
        }

        cout << No_Can << endl;
    }

    return 0;
}
