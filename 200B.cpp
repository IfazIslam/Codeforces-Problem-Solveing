#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    float drinks, sum = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> drinks;
        sum += drinks;
    }
 
    cout << sum / n << endl;
 
    return 0;
}
