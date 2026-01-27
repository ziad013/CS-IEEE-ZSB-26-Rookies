#include <iostream>
using namespace std;

long long Code(long long v,long long k)
{
    if (v == 0) return 0;
    return v + Code(v / k,k);
}

int main()
{
    long long n,k;
    cin >> n >> k;

    long long first = 1, endd = n;
    long long final_Result = n;

    while (first <= endd)
    {
        long long mid = first + (endd - first) / 2;
        if (Code(mid,k) >= n)
        {
            final_Result = mid;
            endd = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }

    cout << final_Result << endl;
    return 0;
}
