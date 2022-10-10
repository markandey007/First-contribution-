// Problem: Confusing Concatenations (CodeChef) , Code:-CONFCAT
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <utility>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    pair<int, int> x;
    x.first =-99999999;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (x.first < arr[i])
        {
            x.first = arr[i];
            x.second = i;
        }
    }
    if (x.second != 0)
    {
        cout << x.second << endl;
        for (int j = 0; j < x.second; j++)
            cout << arr[j] << " ";
        cout << endl
             << abs(x.second - n) << endl;
        for (int j = x.second ; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
    }
    else if (x.second == 0)
        cout << "-1" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
