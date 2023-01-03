#include <stdio.h>

int is_prime(int n) {
  if (n <= 1) return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main(void) {
  int a, b;

  printf("Enter the lower bound: ");
  scanf("%d", &a);
  printf("Enter the upper bound: ");
  scanf("%d", &b);

  printf("Prime numbers between %d and %d:\n", a, b);
  for (int i = a; i <= b; i++) {
    if (is_prime(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}
