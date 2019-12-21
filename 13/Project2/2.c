#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c; //三个参数
	printf("输入a，b，c：");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a + b > c&& a - c < b)
		printf("能构成三角形\n");
	else
		printf("不能构成三角形\n");
	system("pause");
	return 0;


}