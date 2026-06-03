#include <iostream>
using namespace std;

int n;
int x[25];

void In()
{
    for (int i = 1; i <= n; i++)
        cout << x[i];
    cout << endl;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        if (i > 1 && x[i - 1] == 1 && j == 0)
            continue;
        x[i] = j;
        if (i == n)
            In();
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