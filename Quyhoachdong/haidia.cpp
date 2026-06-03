#include <stdio.h>
int n;
int g[100];
int x[100];
int cnt = 0;
int sum_trai = 0, sum_phai = 0;
void InKQ() {
  cnt++;
  printf("Cach %d: dia trai: ", cnt);
  for (int i = 1; i <= n; i++)
    if (x[i] == 1)
      printf("%d ", g[i]);
  printf(", dia phai: ");
  for (int i = 1; i <= n; i++)
    if (x[i] == 2)
      printf("%d ", g[i]);

  printf("\n");
}
void Try(int i) {
  for (int j = 0; j <= 2; j++) {
    x[i] = j;
    if (j == 1)
      sum_trai += g[i];
    if (j == 2)
      sum_phai += g[i];
    if (i == n) {
      if (sum_trai == sum_phai && sum_trai > 0 && sum_phai > 0) {
        inkq();
      }
    } else {
      Try(i + 1);
    }
    if (j == 1)
      sum_trai -= g[i];
    if (j == 2)
      sum_phai -= g[i];
  }
}
int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &g[i]);
  }
  Try(1);
  printf("Tong so cach: %d\n", cnt);
  return 0;
}