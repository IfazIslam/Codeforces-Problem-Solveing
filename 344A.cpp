#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, count = 0;
    cin >> n;
 
    string pole[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> pole[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        if (pole[i] != pole[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
}
