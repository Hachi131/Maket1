#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>	

int main() {
	char str[256] = { 0 };
	scanf("%[^\n]", str); // ^������ʽ
	int len = strlen(str); //strlen��һ���ַ����ĳ���
	int i, j;
	char tmp; 
	for (i = 0, j = len - 1; i < j; i++, j--) { 
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	printf("%s\n", str); //�ȼ���puts��str��/ֱ������ַ���
	system("pause");
	return 0;
}