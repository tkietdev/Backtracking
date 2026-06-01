#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[105][105], dp[105][105];
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
    {
        dp[i][1] = a[i][1];
    }
    for (int j = 2; j <= n; j++)
    {
        for (int i = 1; i <= m; i++)
        {
            int cnt = dp[i][j - 1];
            if (i > 1)
                cnt = min(cnt, dp[i - 1][j - 1]);
            if (i < m)
                cnt = min(cnt, dp[i + 1][j - 1]);
            dp[i][j] = a[i][j] + cnt;
        }
    }
    int ans = dp[1][n];
    for (int i = 2; i <= m; i++)
    {
        ans = min(ans, dp[i][n]);
    }
    cout << ans;
}