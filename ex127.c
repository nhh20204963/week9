#include <stdio.h>

int verify(int n){
	return((n % 2 == 0) ? n : -n);
}
int main(){
	int n;
	printf("So nguyen duong n = ");
	scanf("%d", &n);
	printf("Neu la so chan thi output la n con la so le thi output la -n");
	verify(n);
}

