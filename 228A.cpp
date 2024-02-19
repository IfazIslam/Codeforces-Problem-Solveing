#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long arr[4];
    int count = 0, n = 4;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }

    cout << n - count << endl;

    return 0;
}
