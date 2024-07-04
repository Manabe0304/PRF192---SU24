#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int symmetric(int a[], int size) {
	int mid;
	int i;
	if (size%2 == 1) mid = size/2;
	else mid = size/2 - 1;
	for (i = 0; i <= mid; i++) {
		if (a[i] != a[size-1 - i]) {
			return 0;
		}
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[10], n;
	int i;
	int check = 1;
	
	scanf("%d", &n);
	for ( i = 0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	for ( i = 0; i<n; i++) {
		if (a[i]%2 == 0) {
			check = 0;
			break;
		}
	}
	if (symmetric(a, n) == 0) check = 0;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d", check);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
