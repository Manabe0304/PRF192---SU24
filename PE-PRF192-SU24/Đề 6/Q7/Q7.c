#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, j, n;
  scanf("%d", &n);
  double k, array[n];
  for(i = 0; i < n; i++) {
        scanf("%lf", &array[i]);
  }
  scanf("%lf", &k);
  
  double filteredArray[n];
  int filteredSize = 0;
  for(i = 0; i < n; i++) {
        if(array[i] != k) {
            filteredArray[filteredSize] = array[i];
            filteredSize++;
        }
    }

  for(i = 0; i < filteredSize - 1; i++) {
        for(j = i + 1; j < filteredSize; j++) {
            if(filteredArray[i] < filteredArray[j]) {
                double temp = filteredArray[i];
                filteredArray[i] = filteredArray[j];
                filteredArray[j] = temp;
            }
        }
    }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i = 0; i < filteredSize; i++) {
        printf("%.1lf ", filteredArray[i]);
    }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
