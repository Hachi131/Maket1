#include<stdio.h>
#include<stdlib.h>
//´òÓ¡100-200Ö®¼äµÄËØÊý
int main() {
	int a = 0;
	int b = 0;
	for (a = 100; a <= 200; a += 1) {
		int c = 0;
		for (c = 2; c <= a - 1; c++) {
			if (a % c == 0)
				break;
		}
		if (a == c) {
			b++;
			printf("%d\n", a);
		}
	}
	printf("\nb=%d", b);
	system("pause");
	return 0;
}
