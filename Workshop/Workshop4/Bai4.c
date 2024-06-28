#include <stdio.h>
#include <string.h>

int main() {
  char st1[100], st2[100], st3[100];

  printf("Nhap xau goc: ");
  fgets(st1, sizeof(st1), stdin);
  st1[strcspn(st1, "\n")] = 0;

  printf("Nhap xau con cu: ");
  fgets(st2, sizeof(st2), stdin);
  st2[strcspn(st2, "\n")] = 0;

  printf("Nhap xau con moi: ");
  fgets(st3, sizeof(st3), stdin);
  st3[strcspn(st3, "\n")] = 0;
  
  char *pos = strstr(st1, st2);

  if (pos != NULL) {
    strcpy(pos, st3);
    printf("Xau goc sau khi duoc thay the: '%s'", st1);
  } else {
    printf("Xau '%s' khong co trong xau '%s'", st2, st1);
  }
  return 0;
}
