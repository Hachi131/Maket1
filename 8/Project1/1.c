#include<stdio.h>
#include<stdlib.h>

int main() {
	char a, b;
	printf("输入一个小写字母：\n");
	//getchar函数只能接收单个字符，输入数字也按字符处理
	//同时输入多于一个字符时，也只接收第一次字符，也包含在stdio.函数中
	a = getchar(); //输入一个字符
	b = a - 32;  // //小写字母与大写字母之间的差值为32
	printf("转换后的字母为:%c,%d\n", b, b);
	system("pause");
	return 0;
}