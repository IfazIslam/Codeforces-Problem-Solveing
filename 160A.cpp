#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, total = 0, value, count = 0;
    cin >> n;
 
    int coin[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
        total += coin[i];
    }
    sort(coin, coin + n, greater<int>());
 
    for (int i = 0; i < n; i++)
    {
        value += coin[i];
        count++;
        if (value > total / 2)
        {
            break;
        }
    }
    cout << count << endl;
}
