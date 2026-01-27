#include <iostream>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i];
    }

    int result[n];
    stack<int> st;

    for (int i = 0; i < n; i++)
    {


        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }


        if (st.empty())
        {
            result[i] = 0;
        }
        else
        {
            result[i] = st.top() + 1;
        }


        st.push(i);
    }


    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}

