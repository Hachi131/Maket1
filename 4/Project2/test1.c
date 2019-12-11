#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j;
	printf("1000-2000年之间的闰年\n");
	for (i = 1000; i < 2000; i++) {
		if (i % 4 == 0)
			printf("%d\n", i);

	}
	system("pause");
	return 0;
}