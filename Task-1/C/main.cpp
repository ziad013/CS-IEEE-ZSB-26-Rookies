#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(((n*(n+1))/2)%2 == 0)
    {
        cout << "YES" << endl;

        int set1[100], set2[100];
        int s1 = 0, s2 = 0;

        if (n % 4 == 0)
        {
            for (int i = 1; i <= n/4; i++)
            {
                set1[s1++] = i;
                set1[s1++] = n - i + 1;
            }
            for (int i = n/4 + 1; i <= n - n/4; i++)
            {
                set2[s2++] = i;
            }
        }
        else
        {
            set1[s1++] = 1;
            set1[s1++] = 2;
            set2[s2++] = 3;

            for (int i = 4; i <= n; i += 4)
            {
                if (i + 3 <= n)
                {
                    set1[s1++] = i;
                    set1[s1++] = i + 3;
                    set2[s2++] = i + 1;
                    set2[s2++] = i + 2;
                }
            }
        }

        cout << s1 << "\n";
        for (int i = 0; i < s1; i++) cout << set1[i] << " ";
        cout << "\n";

        cout << s2 << "\n";
        for (int i = 0; i < s2; i++) cout << set2[i] << " ";
        cout << "\n";
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

/* E:\IEEE TASKS\Task 1
#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total = n * (n + 1) / 2;

    if (total % 2 != 0) {
        cout << "NO";
        return 0;
    }

    cout << "YES\n";

    vector<int> set1, set2;

    if (n % 4 == 0) {
        for (int i = 1; i <= n / 4; i++) {
            set1.push_back(i);
            set1.push_back(n - i + 1);
        }
        for (int i = n / 4 + 1; i <= n - n / 4; i++) {
            set2.push_back(i);
        }
    } else {
        set1.push_back(1);
        set1.push_back(2);
        set2.push_back(3);

        for (int i = 4; i <= n; i += 4) {
            if (i + 3 <= n) {
                set1.push_back(i);
                set1.push_back(i + 3);
                set2.push_back(i + 1);
                set2.push_back(i + 2);
            }
        }
    }

    cout << set1.size() << "\n";
    for (int x : set1) cout << x << " ";
    cout << "\n";

    cout << set2.size() << "\n";
    for (int x : set2) cout << x << " ";
    cout << "\n";
}
*/
