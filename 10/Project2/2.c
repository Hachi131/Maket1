#include<stdio.h>
#include<stdlib.h>

int main() {
	int bai, ten, ge, n;
	printf("结果是:");
	for (n = 100; n < 1000; n++) {//整数的取值范围
		bai = n / 100;
		ten = (n - bai * 100) / 10;
		ge = n % 10;
		if (n == bai * bai * bai + ten * ten * ten + ge * ge * ge) //各位上的立方和是否与原数n相等
			printf("%d ", n);
	}
	printf("\n ");
	system("pause");
	return 0;
}
