/****Author: Barish Namazov****/
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

int n, ans;
int s[MAX][MAX];

int color (int i, int j) {
    if (i > 0 && i <= n && j > 0 && j <= n)
        return s[i][j];
    return 3169;
}

int check (int i, int j, int dx, int dy) {
    int c1, c2, c3, c4;
    c1 = color(i, j);
    c2 = color(i + dx, j + dy);
    c3 = color(i + dx - dy, j + dy + dx);
    c4 = color(i - dy, j + dx);
    if (c1 == c2 && c1 == c3 && c1 == c4)
        return 1;
    return 0;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> s[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int dx = 1; dx <= n - i; dx++)
                for (int dy = 0; dy <= n - j; dy++)
                    ans += check (i, j, dx, dy);
    cout << ans << endl;
    return 0;
}
