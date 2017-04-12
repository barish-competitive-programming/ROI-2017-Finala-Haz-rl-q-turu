/****Author: Barish Namazov****/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s1, s2;
    cin >> n;
    while (n --) {
        cin >> s1 >> s2;
        sort (s1.begin(), s1.end());
        sort (s2.begin(), s2.end());
        cout << (s1 == s2 ? "YES" : "NO") << endl;
    }
    return 0;
}
