#include <stdio.h>
#include <string.h>

int main() {
  int i =0 ;
  char w[100];
  char w_normalized[100];
  printf("Nhap W = ");
  fgets(w, 100, stdin);
  w[strcspn(w, "\n")] = 0; 
  while (w[i] == ' ') {
    i++;
  }
  int j = strlen(w) - 1;
  while (w[j] == ' ') {
    j--;
  }
  int k = 0;
  for (i = 0; i <= j; i++) {
    if (w[i] != ' ' || (i > 0 && w[i - 1] != ' ')) {
      w_normalized[k++] = w[i];
    }
  }
  
  w_normalized[k] = '\0';

  printf("Chuan hoa = %s\n", w_normalized);

  return 0;
}
