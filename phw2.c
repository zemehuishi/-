void merge(int a[], int n, int b[], int m, int *c) {
  int i, j;
  for (i = j = 0; i < n && j < m;)
    *c++ = a[i] < b[j] ? a[i++] : b[j++];
  while (i < n) *c++ = a[i++];
  while (j < m) *c++ = b[j++];
}

#include <stdio.h>
int main() {
  int a[] = {1, 3, 5};
  int b[] = {2, 4, 6};
  int c[6];
  merge(a, 5, b, 5, c);
  printf("The merged array is: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", c[i]);
  }
  printf("\n");
  return 0;
}
