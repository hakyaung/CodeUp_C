#include <stdio.h>

int main() {
	int f, s;

	scanf("%06d-%07d", &f, &s);

	printf("%06d%07d", f, s);

	return 0;
}