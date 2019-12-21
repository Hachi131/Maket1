#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c;
	printf("输入三角形三条边a，b，c:");
	scanf_s("%d %d %d", &a, &b, &c);
	if(a+b>c&&b+c>a&&a+c>b){  //当a+b>c且b+c>a且a+c>b时
	if (a == b && a == c)     //当a等于b且a等于c时
		printf("三角形为等边三角形\n");
	else if (a == b || a == c || b == c)  //当a等于b或当a等于c或b等于c时
		printf("三角形为等腰三角形\n");
	else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
		printf("三角形为直角三角形\n");
	else
		printf("三角形为普通三角形\n");
	}
	else
		printf("不能构成三角形\n");
	system("pause");
	return 0;
}