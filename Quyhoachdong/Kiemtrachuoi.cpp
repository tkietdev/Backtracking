#include <bits/stdc++.h>

using namespace std;

bool kiemtra(string s, int l, int r)
{
    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;
    return kiemtra(s, l + 1, r - 1);
}
int main()
{
    string s;
    cin >> s;
    if (kiemtra(s, 0, s.size() - 1))
    {
        cout << "chuoi doi xung ";
    }
    else
    {
        cout << "chuoi khong doi xung";
    }
}