#include <stdio.h>

int main(){
	int a;
	do{
		printf("Moi ban nhap vao mot so nguyen duong trong khoang tu 1 den 10: ");
		scanf("%d", &a);
		if(1>a || a>10){
			printf("So ban nhap khong hop le vui long nhap lai");
		}
	}while( a<1||a>10);
		printf("Bang cu chuong cua %d la:\n", a);
		for(int i = 1; i<=10; i++){
			printf("%d x %d = %d\n", a, i, a * i);
		}
		
		
	
	
	
	return 0;
}
