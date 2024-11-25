#include <stdio.h>

int main(){
	int a ;
	printf("Moi ban nhap vao so nguyen n ");
	scanf("%d", &a);
	if(a<=0){
		printf("So N phai la so nguyen duong");
	}else{
		int sum = 0;
		for (int i = 1; i <= a; i++) {
			sum += i;
		}
		printf("Tong cua 1 den so nguyen duong %d la %d", a, sum);
	}
	return 0;
}
