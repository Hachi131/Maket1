#include<stdio.h>
#include<stdlib.h>

int main() {
	float e = 1.0, n = 1.0;
	int i = 1;
	while (1 / n > 1e-10)
	{
		e += 1 / n;
		i++;
		n = i * n;
	}
	printf("e的值是:%f\n", e); //%f以小数形式输出单 双精度实数
	system("pause");
	return 0;
}