#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
  }
  int oddArr[n];
  int oddCount = 0;
  for (i = 0; i < n; i++) {
      if (arr[i] % 2 != 0) {
            oddArr[oddCount++] = arr[i];
        }
    }

  sortDescending(oddArr, oddCount);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
