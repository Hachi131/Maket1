#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c,d;
	for (a = 100; a < 1000; a++) {
		b= a % 10;
		c = a / 10 % 10;
		d = a / 100;
		if (b * b * b + c * c * c + d * d * d == a)
			printf("%d\n", a);
	}
	system("pause");
	return 0;
}