/****Author: Barish Namazov****/
#include <bits/stdc++.h>
using namespace std;

int used[101];
int n, k, t, ans;
vector <int> l1[101], l2[101];

void dfs(int n) {
    used[n] = 1;
    for(int i = 0; i < l2[n].size(); i++)
        for(int j = 0; j < l1[l2[n][i]].size(); j++)
            if(!used[l1[l2[n][i]][j]])
                dfs(l1[l2[n][i]][j]);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> k;
        while (k --) {
            cin >> t;
            l1[i].push_back (t);
            l2[t].push_back (i);
        }
    }
    for (int i = 0; i < l1[1].size(); i++)
        dfs (l1[1][i]);
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < l1[i].size(); j++)
            if (used[l1[i][j]]) {
                ans ++;
                break;
            }
    if (ans == 0)
        ans = 1;
    cout << ans << endl;
    return 0;
}
