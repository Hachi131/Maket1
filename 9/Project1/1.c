#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>	

int main() {
	char str[256] = { 0 };
	scanf("%[^\n]", str); // ^正则表达式
	int len = strlen(str); //strlen求一个字符串的长度
	int i, j;
	char tmp; 
	for (i = 0, j = len - 1; i < j; i++, j--) { 
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	printf("%s\n", str); //等价于puts（str）/直接输出字符串
	system("pause");
	return 0;
}