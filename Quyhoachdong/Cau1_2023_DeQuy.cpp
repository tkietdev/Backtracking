#include <stdio.h>
using namespace std;

int n;
int a[100];

int SoNguyen(int i) {
  if (i == 1)
    return 1;
  if (a[i - 1] >= a[i])
    return 0;
  return SoNguyen(i - 1);
}

int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
  }
  if (SoNguyen(n)) {
    printf("Day tang dan\n");
  } else {
    printf("Day khong tang dan\n");
  }
}