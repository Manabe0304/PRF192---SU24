#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void binary(int a) {
	int bi[8] = {0}; // Initialize array to zero
	int i;
	for (i = 7; a > 0 && i >= 0; i--) { // Fill the array from the end
		bi[i] = a % 2;
		a /= 2;
	}
	for (i = 0; i < 8; i++) { // Print the array
		printf("%d", bi[i]);
	}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);	
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	binary(a);
	printf(" ");
	binary(b);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
