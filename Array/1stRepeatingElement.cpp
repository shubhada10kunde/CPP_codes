#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "enter n::" << endl;
    cin >> n;

    // int arr[n];
    vector<int> arr(n);
    cout << "enter array elements::" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    const int N = 1e6 + 2; // 10 ^6 max
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX; // maximum value

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}