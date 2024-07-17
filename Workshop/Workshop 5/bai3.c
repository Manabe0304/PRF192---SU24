#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char s[1000], s1[100], s2[100];
  printf("String s:");
  fgets(s, sizeof(s), stdin);

  int i, j = 0;
  for (i = 0; s[i] != '\0'; i++) {
    if (!isdigit(s[i])) {
      s1[j++] = s[i];
    }
  }
  s1[j] = '\0';

  int start = 0;
  int end = strlen(s1) - 1;
  while (isspace(s1[start])) {
    start++;
  }
  while (isspace(s1[end])) {
    end--;
  }
  
  j = 0;
  for (i = start; i <= end; i++) {
    if (isspace(s1[i])) {
      if (i > start && !isspace(s1[i - 1])) {
        s2[j++] = s1[i];
      }
    } else {
      s2[j++] = s1[i];
    }
  }
  s2[j] = '\0';
  printf("String s after deleting:%s", s1);
  printf("Standardize string:%s", s2);

  return 0;
}
