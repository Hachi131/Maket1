#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, n;
	double sum = 1;
	printf(" ‰»În:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum * i;
	printf("nµƒΩ◊≥ÀŒ™:%d!=%lf", n, sum);
	printf("\n");
	system("pause");
	return 0;
}