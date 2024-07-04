//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//int main() {
//  system("cls");
//  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//int n,i,j,t,p;
//scanf("%d",&n);
//int a[n];
//for(i=0; i<n; i++) scanf("%d",&a[i]);
//
//scanf("%d",&p);	// vi tri can chen: 1,2...
//scanf("%d",&t);  // gia tri can chen
//
//// chen gia tri t vao vi tri p
//n=n+1;
//for(i=n-1; i>=p; i--) a[i]=a[i-1]; 
//a[p-1]=t;
//
//  // Fixed Do not edit anything here.
//  printf("\nOUTPUT:\n");
//  //@STUDENT: WRITE YOUR OUTPUT HERE:
//for(i=0; i<n; i++) printf("%d\n",a[i]);
//  
//  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  printf("\n");
//  system ("pause");
//  return(0);
//}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void InsertAt(int a[], int& n, int v, int k) {
	if(k < 0 || k > n) return;
	int i;
	for(i = n; i > k; i--) {
		a[i] = a[i - 1];
	}
	a[k] = v;
	n++;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i,j,t,p;
scanf("%d",&n);
int a[n+1];
for(i=0; i<n; i++) scanf("%d",&a[i]);

scanf("%d",&p);	// vi tri can chen: 1,2...
scanf("%d",&t);  // gia tri can chen

InsertAt(a, n, t, p-1);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=0; i<n; i++) printf("%d\n",a[i]);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
