/****Author: Barish Namazov****/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T --) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        swap (y1, y2);
        swap (y3, y4);
        int x5 = max(x1, x3);
        int y5 = max(y1, y3);
        int x6 = min(x2, x4);
        int y6 = min(y2, y4);
        if (x5 >= x6 || y5 >= y6)
            cout << 0 << endl;
        else
            cout << (max (x5, x6) - min (x5, x6)) * (max (y5, y6) - min (y5, y6)) << endl;
    }
    return 0;
}
