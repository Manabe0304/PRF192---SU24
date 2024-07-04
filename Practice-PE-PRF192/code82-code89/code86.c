#include <stdio.h>

int isPrime(int n) {
	if(n<2) {
		return 0;//ko phai so nguyen to
	}
	int i;
	for(i=2; i<=n-1; i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;

}

int main() {
	int n;
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	
	//Nhap mang
	int i;
	for(i=0;i<n;i++){
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	//in mang
	for(i=0;i<n;i++){
		printf("   %d",a[i]);
	}
	
	//duyet mang
	int flag = 0;
	for(i=0;i<n;i++){
		if(isPrime(a[i])==1){
			printf("\nSo nguyen to dau tien la %d",a[i]);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("\n-1");
	}

	return 0;
}
