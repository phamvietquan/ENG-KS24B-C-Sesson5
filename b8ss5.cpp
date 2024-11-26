#include <stdio.h>

int main(){
	int a,b,UCLN, BCNN;
	printf("Moi ban nhap vao so nguyen duong thu nhat ");
	scanf("%d", &a);
	int number1 = a;
	printf("Moi ban nhap vao so nguyen duong thu hai ");
	scanf("%d", &b);
	int number2 = b;
	if(a==0 || b==0){
		UCLN = a+b;
	}else{
		while(a!=b){
			if(a>b)
				a-=b;
				
			else
				b-=a;
		}
		UCLN = a;
		BCNN = (number1*number2)/UCLN;	
	}
	
	printf("Boi chung nho nhat cua hai so la %d ", BCNN);
	return 0;
}
	

