/****Author: Barish Namazov****/
#include <bits/stdc++.h>
using namespace std;

vector <int> v;
int main()
{
    int ans = 0, ans1 = 0, x;
    while (cin >> x)
        v.push_back (x);
    int mx = -1, mx1 = -1;
    for (int i = 0; i < v.size(); i++)
        if (v[i] > mx)
            mx = v[i];
    for (int i = 0; i < v.size(); i++)
        if (v[i] == mx)
            ans ++;
    for (int i = 0; i < v.size(); i++)
        if (v[i] > mx1 && v[i] != mx)
            mx1 = v[i];
    for (int i = 0; i < v.size(); i++)
        if (v[i] == mx1)
            ans1 ++;
    cout << ans << " " << ans1 << endl;
    return 0;
}
