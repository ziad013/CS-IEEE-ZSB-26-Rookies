#include <iostream>
#include<set>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    set<int> s1;

    for (int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }
    cout << s1.size();
    return 0;
}
