#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum;
    cin >> sum;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int need = sum - arr[i];


        if (mp.count(need)) {
            cout << mp[need] + 1 << " " << i + 1;
            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "IMPOSSIBLE";
    return 0;
}
