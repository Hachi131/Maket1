// shift + alt + enter 编辑区最大化

// 包含头文件
// stdio=>printf
// stdlib=>system
#include <stdio.h>
#include <stdlib.h>
// 主函数 ，一个程序的入口
int main(){
	// int 表示变量的类型， int
	// a 变量的名字
	// = 赋值符号
	// 创造一个变量就相当于开辟一块内存空间
	// 变量命名 数字字母下划线构成（数字不能开头）
	// 给变量起一些具有描述性的名字
	// sizeof查看一个变量在内存中占几个字节
	// %d 格式化字符串
	// %d按照十进制有符号的方式打印一个整数
	// \n 换行
	// 字符类型的变量
	// c语言提供了很多种类型的变量，不同类型的变量在内存中
	// 占有的空间大小不一样
	char a = 0;
	//短整形变量
	short b = 0;
	//整形变量
	int c = 0;
	//长整形变量
	long d = 0;
	// 长长整形变量
	long long e = 0;
	float f = 0.0;
	printf("char：%d\n", sizeof(a));
	printf("short:%d\n", sizeof(b));
	printf("int：%d\n", sizeof(c));
	printf("long：%d\n", sizeof(d));
	printf("long long：%d\n", sizeof(e));

	
	system("pause"); 
	//函数返回了 执行到这个 return 0 程序就执行结束了
	return 0;
}