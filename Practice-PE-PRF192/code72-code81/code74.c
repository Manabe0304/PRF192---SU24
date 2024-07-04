#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float a,b,c,d,x;
  scanf("%f",&a);scanf("%f",&b);scanf("%f",&c);scanf("%f",&d);
  if(b>a){x=a;a=b;b=x;}
  if(c>a){x=a;a=c;c=x;}
  if(d>a){x=a;a=d;d=x;}

  if(c>b){x=b;b=c;c=x;}
  if(d>b){x=b;b=d;d=x;}

  if(d>c){x=c;c=d;d=x;}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%.2f %.2f %.2f %.2f",a,b,c,d);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
