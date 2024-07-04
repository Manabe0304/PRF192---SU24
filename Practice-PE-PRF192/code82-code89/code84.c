#include <stdio.h>

int main() {

	int N;
	printf("\nNhap N: ");
	scanf("%d",&N);

	int m=0;
	int s=0;

	while(s<N) {
		m++;
		s=s+m;
	}
	printf("\nSo nguyen duong m la: %d",m-1);

	return 0;
}
