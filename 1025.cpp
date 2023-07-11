#include <stdio.h>

int main() {
	int a[5];
	int m = 10000;
	int i;

	scanf("%1d%1d%1d%1d%1d", &a[0],&a[1],&a[2],&a[3],&a[4]);

	for (i = 0; i <= 4; i++) {
		printf("[%d]\n", a[i]*m);
		m = m / 10;
	}

	return 0;
}