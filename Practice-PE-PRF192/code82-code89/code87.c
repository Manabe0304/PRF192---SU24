#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calSin(int x, int c){
	
	return 0;
}
int main() // DO NOT EDIT THE main FUNCTION
{system("cls");
  printf("\nTEST Q5 (2 marks):\n");
  double x, c, s;
  printf("Enter x = "); scanf("%lf",&x);
  printf("Enter c = "); scanf("%lf",&c);
  s = calSin(x,c);
  printf("sin(%.1f) = %.4f\n",x,s);
  printf("\nOUTPUT:\n");
  printf("%.4f\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
