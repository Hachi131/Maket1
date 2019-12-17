#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int convert(char s[], int n) {
	int i;
	if ((i = n / 10) != 0) //取反
		convert(s + 1,i );
	*s = n % 10 + '0';
	return 0;
}
int main() {
	int num;
	char str[10] = " ";
	printf("输入整数:");
	scanf("%d", &num);
	convert(str, num);
	printf("输出字符串:");
	printf("%s\n", str);
	system("pause");
	return 0;
}