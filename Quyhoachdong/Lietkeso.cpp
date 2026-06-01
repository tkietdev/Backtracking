#include <bits/stdc++.h>
using namespace std;

int n;
int x[100];

void in()
{
    int dem = 0;

    for (int i = 1; i < n; i++)
    {
        if (x[i] == 1 && x[i + 1] == 0)
            dem++;
    }

    if (dem == 1)
    {
        for (int i = 1; i <= n; i++)
            cout << x[i];
        cout << endl;
    }
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;

        if (i == n)
            in();
        else
            Try(i + 1);
    }
}

int main()
{
    cin >> n;
    Try(1);
    return 0;
}