/****Author: Barish Namazov****/
#include <bits/stdc++.h>
using namespace std;

#define MAX  10001

int n, m;
vector <int> g[MAX], graph[MAX];
int used[MAX], gs[MAX], graphs[MAX];

void bfs(int v) {
    int Q[MAX], qh = 0, qt = 1;
    Q[0] = v; used[v] = 1;
    while (qh < qt) {
        int u = Q[qh++];
        for (int i = 0; i < graphs[u]; i++) {
            int to = graph[u][i];
            if (!used[to]) {
                used[to] = 1;
                Q[qt++] = to;
            }
        }
    }
    qh = 0;
    while (qh < qt) {
        int u = Q[qh++];
        for (int i = 0; i < gs[u]; i++) {
            int to = g[u][i];
            if (!used[to]) {
                used[to] = 1;
                Q[qt++] = to;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T --) {
        memset(gs, 0, sizeof gs);
        memset(graphs, 0, sizeof graphs);
        cin >> n >> m;
        while (m --) {
            int u, v;
            cin >> u >> v;
            g[u].push_back (v), graph[v].push_back (u);
            gs[u]++, graphs[v]++;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
        memset(used, 0, sizeof used);
        bfs(i);
        for (int j = 1; j <= n; j++)
            if (used[j])
                ans ++;
        }
        cout << ans << endl;
    }
    return 0;
}
