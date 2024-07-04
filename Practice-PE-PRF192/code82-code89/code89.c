#include <stdio.h>
#include <stdlib.h>

int main()
{   system("cls");
    printf("\nTEST Q2 (2 marks):\n");
    int i, n;
    double s = 0.0;
    printf("Enter n = ");
    scanf("%d", &n)
  //============================================================
  // Write your statements here
  
 
  //--------------------------------------------------------------------------------------------------------
  // Calculate m based on the parity of n
    int m = (n % 2 == 0) ? n : n - 1; //Toan tu ba ngoi
    
    // Calculate the sum s
    for (i = 1; i <= m; i *= 2) {
        s += 1.0 / i;
    }

    // Print the result
    printf("s = %.4f\n", s);

  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  printf("\nOUTPUT:\n");
  printf("%.4f\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
