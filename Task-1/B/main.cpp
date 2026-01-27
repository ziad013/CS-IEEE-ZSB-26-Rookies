
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

    string x;
    cin >> x;
    int A_Count = 0;
    int C_Count = 0;
    int G_Count = 0;
    int T_Count = 0;
    for(int i = 0 ; i < x.size() ; i++)
    {
        if(x[i] == 'A')
        {
            A_Count++;
        }
        else if(x[i] == 'C')
        {
            C_Count++;
        }
        else if(x[i] == 'G')
        {
            G_Count++;
        }
        else
        {
            T_Count++;
        }
    }
    int maximum_length = std::max({A_Count, C_Count, G_Count, T_Count});
    cout << maximum_length << endl;

    return 0;
}






/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int max_len = 1;
    int curr = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            curr++;
        } else {
            max_len = max(max_len, curr);
            curr = 1;
        }
    }

    max_len = max(max_len, curr);

    cout << max_len;
}


    */
