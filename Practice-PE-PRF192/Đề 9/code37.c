#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    system ("cls");
	int i, j, n;
	scanf("%d", &n);
	printf("\nOUTPUT:\n");
	//i:1,2,3,...,n
	for(i = 1;i <= n; i++){
		//j:1,2,3,...,n+1-i
		for(j = 1; j <= n; j++)
			if(i == n || j == n || n - i == j - 1 )
				printf("*");
			else
				printf(" ");
		}
	printf("\n");
	system("pause");
	return 0;
}
