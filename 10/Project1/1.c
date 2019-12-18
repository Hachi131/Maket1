#include<stdio.h>
#include<stdlib.h>

int main() {
	int n =20;
	int sum = n;
	int cover = 0;

	while (n>0)
	{
		cover += n % 2;
		n /= 2;
		sum += n;
		if (cover == 2) {
			sum++;
			cover--;
		}
	}
	printf("%d\n", sum);
	system("pause");
	return;
}