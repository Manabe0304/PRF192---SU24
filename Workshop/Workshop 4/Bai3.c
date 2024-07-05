#include <stdio.h>
#include <string.h>

int main() {
  char S[100], W[100];
  printf("Nhap xau S: ");
  fgets(S, sizeof(S), stdin);
  S[strcspn(S, "\n")] = 0;
  printf("Nhap xau W: ");
  fgets(W, sizeof(W), stdin);
  W[strcspn(W, "\n")] = 0;
  char *found = strstr(S, W);
  if (found != NULL) {
    printf("W xuat hien trong S o vi tri %ld\n", found - S);
  } else {
    printf("W khong xuat hien trong S\n");
  }
  return 0;
}
