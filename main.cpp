/****Author: Barish Namazov****/
#include <bits/stdc++.h>
using namespace std;

int dp[31];

void calc() {
    dp[1] = 2;
    dp[2] = 4;
    for (int i = 3; i <= 30; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
}
int main()
{
    calc();
    int n;
    cin >> n;
    cout << dp[n] << endl;
    return 0;
}
