#include <stdio.h>

int main(){
	int a = 29;
	int b;
	
	do {
		printf("Moi ban doan so bi an ");
		scanf("%d", &b);
		
		if(b!=a){
			printf("Sai roi doan lai nao\n");
		}
	
	}
	while(a!=b);
		printf("So %d ban nhap da chinh xac", b);

	
	return 0;
}
