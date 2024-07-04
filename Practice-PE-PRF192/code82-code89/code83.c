#include <stdio.h>
#include<math.h>

int main() {
	double x;
	int n;
	printf("\nNhap x:");
	scanf("%lf",&x);
	
	printf("\nNhap n:");
	scanf("%d",&n);
	
	int i;
	int d=1;
	double s=0;
	for(i=1;i<=n;i++){
		s=s+ d*pow(x,i);
		d=-d;
	}
	printf("\n Tong la: %lf",s);

	return 0;
}
