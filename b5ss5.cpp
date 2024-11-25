#include <stdio.h>

int main(){
	for(int a = 1; a<=10; a++){
	printf("Bang cu chuong cua %d la:\n", a);
		for(int i = 1; i<=10; i++){
			printf("%d x %d = %d\n", a, i, a * i);
		}
	}
	
	
	return 0;
}
