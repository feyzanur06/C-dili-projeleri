#include <stdio.h>

int main() {
  int n, i;
  unsigned long long faktoriyel = 1;

  printf("Bir tam sayi giriniz: ");
  scanf("%d", &n);

  // Negatif sayý girilirse hata mesajý ver
  if (n < 0) {
    printf("Faktoriyel degeri negatif olamaz");
  } else {
    for (i = 1; i <= n; ++i) {
      faktoriyel *= i;
    }

    printf("%d ssyisinin faktoriyeli = %llu", n, faktoriyel);
  }

  return 0;
}
