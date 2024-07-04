#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char * my_strstr(int k, char s[], char u[]) {
  char *s1 = s+k;
  char * p = strstr(s1,u); 
  return(p);
}
//replace all sub-string u by string v in the string s
void replaceAll(char s[], char u[], char v[]) {
  int k,i,j,n,nu,nv; 
  nu=strlen(u);nv=strlen(v);
  char * p, *q, x[50];
  k = 0; 
  while(1) {
    n = strlen(s);
    p = my_strstr(k,s,u);
    if(p==NULL) break;
    q = s + (n-strlen(p)+nu);
    strcpy(x,q);
    i=n-strlen(p);
    k=n-strlen(p)+nv;
    for(j=0;j<nv;j++) s[i++]=v[j];
    for(j=0;j<strlen(x);j++) s[i++]=x[j];
    s[i]='\0';
  }	
}


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char o[50],p[10],v[10];
  gets(o); gets(p); strcpy(v,p);
  strrev(v);
  replaceAll(o,p,v);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%s",o);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
