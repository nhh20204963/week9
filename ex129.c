#include <stdio.h>

void isLeapYears(int n){
	if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)){
		printf("Nam %d nhuan", n);
	}else{
		printf("Nam %d khong nhuan", n);
	}
}
int main(){
	int n;
	printf("Nhap nam = ");
	scanf("%d", &n);
	isLeapYears(n);
}
