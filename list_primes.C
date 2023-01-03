#include <stdio.h>

int main() {
  int a, b;

  // Read a and b from the user
  printf("Enter a and b: ");
  scanf("%d %d", &a, &b);

  // Print the prime numbers between a and b
  for (int i = a; i <= b; i++) {
    int is_prime = 1; // flag to store whether i is prime

    if (i < 2) {
      is_prime = 0;
    } else if (i == 2) {
      // 2 is a prime number
    } else if (i % 2 == 0) {
      is_prime = 0;
    } else {
      for (int j = 3; j * j <= i; j += 2) {
        if (i % j == 0) {
          is_prime = 0;
          break;
        }
      }
    }

    if (is_prime) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
