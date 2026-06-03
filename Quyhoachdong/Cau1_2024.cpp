#include <stdio.h>

int n, k, D;
int v[105];
int x[105];
int ktra = 0;
inline void In()
{
    printf("Bat may bom: ");
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
inline void Try(int i, int sum)
{
    if (ktra)
        return;
    if (i > n)
    {
        if (sum == D)
        {
            In();
            ktra = 1;
        }
        return;
    }
    // Truong hop: Khong bat may bom
    x[i] = 0;
    Try(i + 1, sum);
    // Truong hop: Bat may bom
    x[i] = 1;
    Try(i + 1, sum + v[i] * k);
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d %d", &k, &D);
    Try(1, 0);
    if (!ktra)
    {
        printf("Khong co phuong an\n");
    }
    return 0;
}
/*
Input1:
5
1 2 4 8 3
5 60
Output1:
Bat may bom: 3 4

Input2:
5
2 4 6 8 10
3 36

Output2:
Bat may bom: 2 4
*/